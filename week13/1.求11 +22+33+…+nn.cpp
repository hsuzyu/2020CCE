#include <stdio.h>
int main()
{
	int n, a=0;
	scanf("%d",&n);
	for(int i=1; i<=n; i++){
		a+=i*10+i;
	}
	printf("%d",a);
}
