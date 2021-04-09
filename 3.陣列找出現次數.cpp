#include <stdio.h>
int main()
{
	int n[10], a=0, b;
	for(int i=0; i<10; i++){
		scanf("%d",&n[i]);
		if(n[i]==0) break;
	}
	scanf("%d",&b);
	for(int i=0; i<10; i++){
		if(n[i]==b) a++;
	}
	printf("%d\n",a);
}
