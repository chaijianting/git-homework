#include<stdio.h>
int main()
{
	int i,s,f,m;
	scanf("%d",&i);
	s=i/3600;
	f=i/60;
	m=i%60;
	printf("%d h %d min %d s\n",s,f,m);
	return 0;
}
