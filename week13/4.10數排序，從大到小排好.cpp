#include <stdio.h>
int main()
{
	int a[10];
	for(int i=0; i<10; i++){
		scanf("%d",&a[i]);
	}
	for(int i=0; i<10; i++){
		for(int j=0; j<i; j++){
			if(a[i]>a[j]){
				int temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	}
	for(int i=0; i<10; i++){
		printf("%d ",a[i]);
	}
}
