# 第十二周

## 第一題 數字個數
```C
#include <stdio.h>
int main()
{
	int n, a=0;
	for(int i=0; i<10; i++){
		scanf("%d",&n);
		if(n==0) break;
		else a++;
	}
	printf("%d",a);
}
```
## 第二題 剩餘啤酒有幾手又幾瓶
```C
#include <stdio.h>
int main()
{
	int p, d;
	scanf("%d%d",&p ,&d);
	printf("%d %d",(p-6*d)/6 ,(p-6*d)%6);

}
```
## 第三題 三數最小
```C
#include <stdio.h>
int f(int a, int b, int c)
{
	int n;
	n=a;
	if(n>b) n=b;
	if(n>c) n=c;
	return n;
}
int main()
{
	int a, b, c;
	scanf("%d%d%d",&a ,&b ,&c);
	printf("%d\n",f(a, b, c));
}
```
## 第四題 計算立方值
```C
#include <stdio.h>
int main()
{
	int a[6];
	for(int i=0; i<6; i++){
		scanf("%d",&a[i]);
		printf("%d\n",a[i]*a[i]*a[i]);
	}
}
```
## 第五題 判斷平方數
```C
#include <stdio.h>
int main()
{
	int a, n;
	scanf("%d",&a);
	for(int i=1; i<=1000; i++){
		if(a==i*i){
			n=i;
			break;
		}
		else n=0;
	}
	printf("%d",n);
}
```
## 第六題 計算質數個數
```C
#include <stdio.h>
int main()
{
	int a, b, n=0, m=0;
	scanf("%d%d",&a ,&b);
	for(int i=a; i<=b; i++){
		for(int k=1; k<i; k++){
			if(i%k==0) n++;
		}
		if(n==1) m++;
		n=0;
	}
	printf("%d",m);
}
```
## 第七題 三數組合
```C
#include <stdio.h>
int main()
{
	int n[3], a=0, t;
	for(int i=0; i<3; i++){
		scanf("%d",&n[i]);
	}
	for(int i=0; i<3; i++){
		for(int k=0; k<3; k++){
			if(n[i]<n[k]){
			t=n[i];
			n[i]=n[k];
			n[k]=t;
		}
		}
	}
	for(int i=2; i>=0; i--){
		a=a*10+n[i];
	}
	printf("%d",a+1);
}
```
## 第八題 找千位數
```C
#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	printf("%d",a/1000%10);
}
```
## UVA 11321
```C
#include <stdio.h>
int a[10000];
void swap(int i, int j)
{
    int temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}
int main()
{
    int N, M;
    while(scanf("%d %d", &N, &M)==2){
        for(int i=0; i<N; i++){
            scanf("%d",&a[i]);
        }
        for(int i=0; i<N; i++){
            for(int j=i+1; j<N; j++){
                if(a[i]%M>a[j]%M) swap(i,j);
                if(a[i]%M==a[j]%M){
                    if(a[i]%2==0 && a[j]%2!=0) swap(i,j);
                    if(a[i]%2!=0 && a[j]%2!=0 && a[i]<a[j]) swap(i,j);
                    if(a[i]%2==0 && a[j]%2==0 && a[i]>a[j]) swap(i,j);
                }
            }
        }
        printf("%d %d\n",N ,M);
        for(int i=0; i<N; i++){
            printf("%d\n",a[i]);
        }
    }
}
```
