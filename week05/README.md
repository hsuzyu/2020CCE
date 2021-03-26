## 第一題 反序數字
```C
#include <stdio.h>
int main()
{
	int n, a=0, b;
	scanf("%d",&n);
	b=n;
	while(n>=1){
		a=a*10+n%10;
		n/=10;
	}
	printf("%d+%d=%d\n",b ,a ,b+a);
}
```

## 第二題 絕對值函數
```C
#include <stdio.h>
int f(int n)
{
	if(n<0) n-=2*n;
	return n;
}
int main(void)
{
	int n;
	scanf("%d",&n);
	printf("[%d]",f(n));
	return 0;
}
```

## 第三題 N數之和
```C
#include <stdio.h>
int main()
{
	int n, a[100], b=0;
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		scanf("%d",&a[i]);
		b+=a[i];
	}
	printf("%d\n",b);
}
```

## 第四題 三數極大
```C
#include <stdio.h>
int main()
{
	int a[3], M=1;
	for(int i=0; i<3; i++){
		scanf("%d",&a[i]);
		if(a[i]>M) M=a[i];
	}
	printf("%d\n",M);
}
```

## 第五題 計算商數
```C
#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d%d",&a ,&b);
	printf("%d\n",a/b);
}
```
