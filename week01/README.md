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
