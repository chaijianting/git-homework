#include <stdio.h>
#define PI 3.1415926
int main()
{
	double d,nL,nR,vL,vR,v;
	scanf("%lf %lf %lf",&d,&nL,&nR);
	vL=(nL/60)*PI*d;
	vR=(nR/60)*PI*d;
	v=(vL+vR)/2;
	printf("vL=%.3lfm/s\nvR=%.3lfm/s\n%.3lfm/s\n",vL,vR,v);
	return 0;
	
}
