#include <stdio.h>
int main()
{

	int a[10], n=1000, s, m;
	float S;
	for(int i=0; i<10; i++){
		scanf("%d",&a[i]);
		if(n>a[i]){
			m=i+1;
			n=a[i];
		}
	}
	S=1.2/n*60*60;
	s=S;
	printf("%d %d",m ,s);
}
