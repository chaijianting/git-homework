#include<stdio.h>
int main()
{
	double u,i,t,p,r,e;
	scanf("%lf %lf %lf",&u,&i,&t);
	p=u*i;
	r=u/i;
	e=p*t/3600;
	printf("P=%.3lf\nR=%.3lf\nE=%.3lf\n",p,r,e);
	return 0;
}
