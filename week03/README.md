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
