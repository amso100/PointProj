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


}
