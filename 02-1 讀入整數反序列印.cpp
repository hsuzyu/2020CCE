#include <stdio.h>
int main()
{
	int n[1000], a=0;
	for(int i=0; i<1000; i++){
		scanf("%d",&n[i]);
		if(n[i]==0){
		a=i;
		break;
		}
	}
	for(int i=a-1; i>=0; i--){
		printf("%d ",n[i]);
	}
	printf("\n");
}
