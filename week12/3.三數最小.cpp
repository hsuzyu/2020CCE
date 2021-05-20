#include <stdio.h>
int f(int a, int b, int c)
{
	int n;
	n=a;
	if(n>b) n=b;
	if(n>c) n=c;
	return n;
}
int main()
{
	int a, b, c;
	scanf("%d%d%d",&a ,&b ,&c);
	printf("%d\n",f(a, b, c));
}

