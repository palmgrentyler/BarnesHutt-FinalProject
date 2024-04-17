#include "Bucket.h"

Bucket::Bucket() {

};

Bucket::Bucket(unsigned count)  //Creation of a Bucket with a vector of point pointers
{
	parent = NULL;

	indices = new unsigned[count];
	num_indices = count;

	for (unsigned i = 0; i < count; i++) {
		indices[i] = i;
	}
};

Bucket::~Bucket(){};

void Bucket :: getMinMax(Point *points, unsigned num_points) {
	min = Point(1E24, 1E24);
	max = Point(-1E24, -1E24);

	for (unsigned i = 0; i < num_points; i++) {
		if (points[i].xCor < min.xCor) min.xCor = points[i].xCor;
		if (points[i].yCor < min.yCor) min.yCor = points[i].yCor;
		if (points[i].xCor > max.xCor) max.xCor = points[i].xCor;
		if (points[i].yCor > max.yCor) max.yCor = points[i].yCor;
	}
}

void Bucket::barnesHuttSort(Bucket *_parent, Point *point_list, unsigned num_points) {
	Point mid;

	mid = mid.lerp(min, max);

	sort_buckets = new Bucket[4];

	for (unsigned i = 0; i < 4; i++) {
		sort_buckets[i].parent = _parent;
		sort_buckets[i].indices = new unsigned[_parent->num_indices];
		sort_buckets[i].num_indices = 0;
	}
	sort_buckets[0].min = _parent->min;
	sort_buckets[0].max = mid;

	sort_buckets[1].min = Point(mid.xCor, _parent->min.yCor);
	sort_buckets[1].max = Point(_parent->max.xCor, mid.yCor);

	sort_buckets[2].min = Point(_parent->min.xCor, mid.yCor);
	sort_buckets[2].max = Point(mid.xCor, _parent->max.yCor);

	sort_buckets[3].min = mid;
	sort_buckets[3].max = _parent->max;

	unsigned sort_index;

	for (unsigned i = 0; i < _parent->num_indices; i++) {
		unsigned point_index;

		point_index = _parent->indices[i];

		sort_index = point_list[point_index].xCor > mid.xCor;
		sort_index |= (point_list[point_index].yCor > mid.yCor) << 1;

		printf("%p: bc: %d i: %d indices[%d] x,y: %f, %f, %d\n", _parent, _parent->num_indices, i, point_index, point_list[point_index].xCor, point_list[point_index].yCor, sort_index);
		Bucket* sort_bucket;

		sort_bucket = &sort_buckets[sort_index];

		sort_bucket->indices[sort_bucket->num_indices] = point_index;
		sort_bucket->num_indices++;
	}
	for (unsigned i = 0; i < 4; i++)
	{
		for (unsigned j = 0; j < sort_buckets[i].num_indices; j++)
		{
			printf("parent: %p bucket: %d indices[%d]: %d\n", _parent, i, j, sort_buckets[i].indices[j]);
		}
	}

	printf("__________________________________\n");

	for (int i = 0; i < 4; i++) {
		if (sort_buckets[i].num_indices > 1) {
			barnesHuttSort(&sort_buckets[i], point_list, num_points);
		}
		else if (sort_buckets[i].num_indices == 1) {
			unsigned index = sort_buckets[i].indices[0];
			printf("Solo: %p: bc: %d i: %d indices[%d] x,y: %f, %f\n", sort_buckets, sort_buckets[i].num_indices, i, i, point_list[index].xCor, point_list[index].yCor);
		}
	}
}

