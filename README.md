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

## 第五題 進位轉十進位
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


```## 第題 
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

