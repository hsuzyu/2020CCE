# 第十四周
## 第一題 奇數反流
```C
#include <stdio.h>
int main()
{
	int N, a[100];
	scanf("%d",&N);
	for(int i=0; i<N; i++){
		scanf("%d",&a[i]);
	}
	for(int i=N-1; i>=0; i--){
		if(a[i]%2!=0) printf("%d ",a[i]);
	}
}
```
## 第二題 大位王
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n<0) n=-n;
	while(n>9){
		n/=10;
	}
	printf("%d\n",n);
}
```
## 第三題 輸入西元y年，判斷該y年是否為閏年
```C
#include <stdio.h>
int main()
{
	int y;
	scanf("%d",&y);
	if(y%4==0 && y%100!=0) printf("%d is a leap year.\n",y);
	else printf("%d is not a leap year.\n",y);
}
```
## 第四題 把數字倒著印出來
```C
#include <stdio.h>
int main()
{
	int a[10];
	for(int i=0; i<10; i++){
		scanf("%d",&a[i]);
	}
	for(int i=9; i>=0; i--){
		printf("%d ",a[i]);
	}
}
```
## 第五題 區間測速
```C
#include <stdio.h>
int main()
{
	int n, a;
	float m;
	scanf("%d",&n);
	m=1.2/n*60*60;
	a=m;
	printf("%d",a);
}
```
