#include <stdio.h>
int main()
{
	int a, b, c, d, A;
	scanf("%d%d%d%d",&a ,&b, &c, &d);
	A=(c-a)*(d-b);
	if(A<0) A=-A;
	printf("%d",A);
}
