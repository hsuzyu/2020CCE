#include <stdio.h>
#include <string.h>
int main()
{
	char a[100]={0};
	scanf("%s",&a);
	size_t m=strlen(a);
	for(int i=0; i<m; i++){
		if(a[i]!='2') printf("%c",a[i]);
	}
	printf("\n");
}
