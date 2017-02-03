#include <stdio.h>
#include <math.h>
// 2017-02-02-03 
main ()
{
	struct point {
		int x;
		int y;
	}pt2;
	struct point pt = {4,3};
	printf("%d,%d\n",pt.x,pt.y);
	double dist,dist2,sqrt(double);
	dist = sqrt((double)pt.x * pt.x + (double)pt.y * pt.y);
	printf("%3.1f\n",dist);

	dist2 = sqrt(4 * 4 + 3 * 3);
	printf("%f\n",dist2);

}
