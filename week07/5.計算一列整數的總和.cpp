#include <stdio.h>
int main()
{
	int n=0, a=0;
	while(n!=999){
		a+=n;
		printf("Enter an integer ( 999 to end ): \n");
		scanf("%d",&n);
	}
	printf("The total is: %d",a);
}
