#include <stdio.h>
int main()
{
	int a, b, n;
	scanf("%d%d",&a ,&b);
	if(a<0){
		if(b<0) n=3;
		else n=2;
	}
	else{
		if(b<0) n=4;
		else n=1;
	}
	printf("%d\n",n);
}
