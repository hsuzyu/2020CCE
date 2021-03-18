#include <stdio.h>
int MYPOWER(int a,int b)
{
	int n=1;
	for(int i=b; i>0; i--){
		n*=a;
	}
	return n;
}
int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("[%d]",MYPOWER(a,b));
	return 0;
}
