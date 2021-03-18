#include <stdio.h>
int main()
{
	int a, b, c, M=0, m=0;
	scanf("%d%d%d",&a, &b, &c);
	if(a>b && a>c){
		if(b>c) printf("%d\n",a-c);
		else printf("%d\n",a-b);
	}
	if(b>a && b>c){
		if(a>c) printf("%d\n",b-c);
		else printf("%d\n",b-a);
	}
	if(c>b && c>a){
		if(a>b) printf("%d\n",c-b);
		else printf("%d\n",c-a);
	}
}
