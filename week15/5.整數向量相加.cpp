#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n], b[n];
	for(int i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	for(int i=0; i<n; i++){
		scanf("%d",&b[i]);
		printf("%d ",a[i]+b[i]);
	}
}
