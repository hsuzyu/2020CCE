# 第十五周

## 第一題 億萬富翁
```C
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
```
## 第二題 秒數換算
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("%02d:%02d:%02d",n/3600, n%3600/60, n%60);
}
```
## 第三題 水杯接水
```C
#include <stdio.h>
int main()
{
	int n, m;
	scanf("%d%d",&n ,&m);
	if(n%m==0) printf("%d",n/m);
	else printf("%d",n/m+1);
}
```
## 第四題 平面兩座標的面積
```C
#include <stdio.h>
int main()
{
	int a, b, c, d, A;
	scanf("%d%d%d%d",&a ,&b, &c, &d);
	A=(c-a)*(d-b);
	if(A<0) A=-A;
	printf("%d",A);
}
```
## 第五題 整數向量相加
```C
#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n], b[n];
	for(int i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	for(int i=0; i<n; i++){
		scanf("%d",&b[i]);
		printf("%d ",a[i]+b[i]);
	}
}
```
