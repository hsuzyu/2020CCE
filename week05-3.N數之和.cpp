#include <stdio.h>
int main()
{
	int n, a[100], b=0;
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		scanf("%d",&a[i]);
		b+=a[i];
	}
	printf("%d\n",b);
}
