#include <stdio.h>
int main()
{
	char c[4];
	int a=0, n=1;
	scanf("%s",&c);
	for(int i=3; i>=0; i--){
		a+=(c[i]-'0')*n;
		n*=2;
	}
	printf("%d\n",a);
}
