#include <stdio.h>
int main()
{
	int a, b, t;
	scanf("%d%d",&a ,&b);
	if(a>b){
		t=a;
		a=b;
		b=t;
	}
	for(int i=a; i<=b; i++){
		if(i%7==0) printf("%d ",i);
	}
}
