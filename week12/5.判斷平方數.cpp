#include <stdio.h>
int main()
{
	int a, n;
	scanf("%d",&a);
	for(int i=1; i<=1000; i++){
		if(a==i*i){
			n=i;
			break;
		}
		else n=0;
	}
	printf("%d",n);
}
