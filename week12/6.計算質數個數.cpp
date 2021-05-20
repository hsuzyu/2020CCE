#include <stdio.h>
int main()
{
	int a, b, n=0, m=0;
	scanf("%d%d",&a ,&b);
	for(int i=a; i<=b; i++){
		for(int k=1; k<i; k++){
			if(i%k==0) n++;
		}
		if(n==1) m++;
		n=0;
	}
	printf("%d",m);
}
