#include <stdlib.h>
#include <stdio.h>

//Definition of Point struct
typedef struct point_t* {
	int x;
	int y;
} Point;

Point createPoint(int x, int y) {
	Point p = malloc(sizeof(struct point_t));
	p->x = x;
	p->y = y;
	return p;
}

Point GetX(Point p) {
	return p->x;
}

Point GetY(Point p) {
	return p->y;
}

void destroyPoint(Point p) {
	free(p);
}

int main() {
	int x1 = 2, x2 = 7;
	Point p1 = createPoint(x1, x2);
	printf("Point is (%d,%d).", GetX(p1), GetY(p1));
	destroyPoint(p1);
	return 0;
}
