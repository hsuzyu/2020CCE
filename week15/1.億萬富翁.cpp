#include <stdio.h>
#include <string.h>
int main()
{
	char n[15];
	scanf("%s",n);
	int a=strlen(n);
	for(int i=0; i<a; i++){
		if((a-i)%3==0 && (a-i)!=15) printf(",%c",n[i]);
		else printf("%c",n[i]);
	}
}

