#include <stdio.h>
int main()
{
	int N, a[100];
	scanf("%d",&N);
	for(int i=0; i<N; i++){
		scanf("%d",&a[i]);
	}
	for(int i=N-1; i>=0; i--){
		if(a[i]%2!=0) printf("%d ",a[i]);
	}
}
