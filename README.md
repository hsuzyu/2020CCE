# 2020CCE
# 第一周

## 第一題 找零錢
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d=50*%d+5*%d+1*%d\n",n, n/50, n%50/5, n%50%5);
}
```

## 第二題 因數個數
```C
#include <stdio.h>
int main()
{
	int n, a=0;
	scanf("%d",&n);
	for(int i=1; i<=n; i++){
		if(n%i==0)a++;
	}
	printf("%d\n",a);
}
```

## 第三題 找倍數
```C
#include <stdio.h>
int main()
{
	int a[10], n=0;
	for(int i=0; i<10; i++){
		scanf("%d",&a[i]);
		if(a[i]%3==0) n++;
		}
	printf("%d\n",n);
}
```

## 第四題 整數轉換等級
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n>=90) printf("A\n");
	else if(n<90 && n>=80) printf("B\n");
	else if(n<80 && n>60) printf("C\n");
	else printf("F\n");
}
```

## 第五題 分數換簡
```C
#include <stdio.h>
int main()
{
	int a, b, c=0, i;
	scanf("%d%d",&a, &b);
	for(i=1; i<=a; i++){
		if(a%i==0 && b%i==0) c=i;
	}
	printf("%d %d\n", a/c, b/c);
}
```
# 第二周

## 第一題 讀入整數反序列印
```C
#include <stdio.h>
int main()
{
	int n[1000], a=0;
	for(int i=0; i<1000; i++){
		scanf("%d",&n[i]);
		if(n[i]==0){
		a=i;
		break;
		}
	}
	for(int i=a-1; i>=0; i--){
		printf("%d ",n[i]);
	}
	printf("\n");
}
```

## 第二題 A的B次方函數
```C
#include <stdio.h>
int MYPOWER(int a,int b)
{
	int n=1;
	for(int i=b; i>0; i--){
		n*=a;
	}
	return n;
}
int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("[%d]",MYPOWER(a,b));
	return 0;
}
```

## 第三題 漸增數列相加
```C
#include <stdio.h>
int main()
{
	int n, a=0;
	scanf("%d",&n);
	for(int i=1; i<=n; i++){
		a+=i*(i-1);
	}
	printf("%d\n",a);
}
```

## 第四題 判別正方形
```C
#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d%d",&a ,&b);
	if(a==b) printf("Enter two numbers:  It is a square ");
	else printf("Enter two numbers:  It is not a square ");
}
```

## 第五題 二進位轉十進位
```C
#include <stdio.h>
int main()
{
	char c[4];
	int a=0, n=1;
	scanf("%s",&c);
	for(int i=3; i>=0; i--){
		a+=(c[i]-'0')*n;
		n*=2;
	}
	printf("%d\n",a);
}
```

## 第六題 均標與前標計算
```C
#include <stdio.h>
int main()
{
	int n, a[100];
	float b, c,t=0, d=0, e=0;
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		scanf("%d",&a[i]);
		t+=a[i];
	}
	b=t/n;
	for(int i=0; i<n; i++){
	if(a[i]>=b){
		d++;
		e+=a[i];
	}
	}
	c=e/d;
	printf("均標:%.1f\n",b);
	printf("前標:%.1f\n",c);
}
```

# 第三周

## 第一題 計算陣列的平方值
```C
#include <stdio.h>
int main()
{
	int N, a[10];
	scanf("%d",&N);
	for(int i=0; i<N; i++){
		scanf("%d",&a[i]);
		printf("%d,",a[i]*a[i]);
	}
	printf("\n");
}
```

## 第二題 大小寫轉換
```C
#include <stdio.h>
int main()
{
	char a[10];
	scanf("%s",&a);
	for(int i=0; i<10; i++){
	if(a[i]>='A' && a[i]<='Z') a[i]+=32;
	else if(a[i]>='a' && a[i]<='z') a[i]-=32;
	}
	printf("%s\n",a);
}
```

## 第三題 計算幾週與幾天
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d %d\n",n/7, n%7);
}
```

## 第四題 計程車資計算
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n<=2000) printf("100\n");
	else if(n>2000 && n/500==0)printf("%d\n",(n-2000)/500*5+100);
	else printf("%d\n",((n-2000)/500+1)*5+100);
}
```

## 第五題 兩數間可被5整除的整數
```C
#include <stdio.h>
int main()
{
	int m, n, a=0;
	scanf("%d%d",&m, &n);
	if(m>n){
		a=n;
		n=m;
		m=a;
		}
	for(int i=m; i<=n; i++){
		if(i%5==0) printf("%d\n",i);
	}
}
```

## 第六題 整數間最大距離
```C
#include <stdio.h>
int main()
{
	int a, b, c, M=0, m=0;
	scanf("%d%d%d",&a, &b, &c);
	if(a>b && a>c){
		if(b>c) printf("%d\n",a-c);
		else printf("%d\n",a-b);
	}
	if(b>a && b>c){
		if(a>c) printf("%d\n",b-c);
		else printf("%d\n",b-a);
	}
	if(c>b && c>a){
		if(a>b) printf("%d\n",c-b);
		else printf("%d\n",c-a);
	}
}
```
