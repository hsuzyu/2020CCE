#include <stdio.h>
int main()
{
	int a[3], M=1;
	for(int i=0; i<3; i++){
		scanf("%d",&a[i]);
		if(a[i]>M) M=a[i];
	}
	printf("%d\n",M);
}
