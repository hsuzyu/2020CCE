#include <stdio.h>
int main()
{
	int N, a=0;
	scanf("%d",&N);
	for(int i=1; i<=N; i++){
		if(i%2!=0) a+=i;
	}
	printf("%d",a);
}
