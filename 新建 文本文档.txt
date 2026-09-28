#include<stdio.h>
int main(void)
{
	double u,i,t,p,r,e;
	scanf("%lf %lf %lf",&u,&i,&t);
	p=u*i;
	r=u/i;
	e=u*i*t/3600;
	printf("%.2lf %.2lf %.3lf",p,r,e);
	return 0;                            
}
