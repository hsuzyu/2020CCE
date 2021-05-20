#include <stdio.h>
#include <string.h>
int main()
{
	char a[81];
	int n=0;
	scanf("%s",a);
	for(int i=0; i<strlen(a); i++){
		if(a[i]>='0' && a[i]<='9') n++;
	}
	printf("%d",n);
}
