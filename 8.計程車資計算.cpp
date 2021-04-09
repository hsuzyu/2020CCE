#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n<=1500) printf("100");
	else if((n-1500)%250==0) printf("%d",(n-1500)/250*5+100);
	else printf("%d",((n-1500)/250+1)*5+100);
}
