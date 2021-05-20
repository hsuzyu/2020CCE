#include <stdio.h>
int main()
{
	int n, a=0;
	for(int i=0; i<10; i++){
		scanf("%d",&n);
		if(n==0) break;
		else a++;
	}
	printf("%d",a);
}
