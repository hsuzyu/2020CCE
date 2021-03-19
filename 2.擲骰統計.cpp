#include <stdio.h>
#include <string.h>
int main()
{
	char n[100]={0};
	int  a=0, b=0, c=0, d=0, e=0, f=0;
	scanf("%s",&n);
	size_t m=strlen(n);
	for(int i=0; i<m; i++){
		if(n[i]=='1') a++;
		else if(n[i]=='2') b++;
		else if(n[i]=='3') c++;
		else if(n[i]=='4') d++;
		else if(n[i]=='5') e++;
		else f++;
	}
	printf("1:%d\n2:%d\n3:%d\n4:%d\n5:%d\n6:%d\n",a, b, c, d, e, f);
}
