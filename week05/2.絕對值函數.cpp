#include <stdio.h>
int f(int n)
{
	if(n<0) n-=2*n;
	return n;
}
int main(void)
{
	int n;
	scanf("%d",&n);
	printf("[%d]",f(n));
	return 0;
}
