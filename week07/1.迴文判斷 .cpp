#include <stdio.h>
int main()
{
	char n[4];
	int a=0;
	scanf("%s",n);
	for(int i=0; i<2; i++){
		if(n[i]==n[3-i]) a=1;
		else {
			a=0;
			break;
		}
	}
	if(a==1) printf("YES\n");
	else printf("NO\n");
}

