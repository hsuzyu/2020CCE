# 第十三周

## 第一題 求11 +22+33+…+nn
```C
#include <stdio.h>
int main()
{
	int n, a=0;
	scanf("%d",&n);
	for(int i=1; i<=n; i++){
		a+=i*10+i;
	}
	printf("%d",a);
}
```
## 第二題 求兩數之最大公因數
```C
#include <stdio.h>
#include<iostream>
using namespace std;
int GCD(int a, int b){
  while(a>0 && b>0){
  	if(a>b) a%=b;
  	else b%=a;
  }
  if(a>b) return a;
  else return b;
}
int main(){
  int a,b;cin>>a>>b;
  cout<<GCD(a,b)<<endl;
  return 0;
}
```
## 第三題 區間測速-超速之王
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
```## 第一題 數字個數
```C
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
```
## 第四題 10數排序，從大到小排好
```C
#include <stdio.h>
int main()
{
	int a[10];
	for(int i=0; i<10; i++){
		scanf("%d",&a[i]);
	}
	for(int i=0; i<10; i++){
		for(int j=0; j<i; j++){
			if(a[i]>a[j]){
				int temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	}
	for(int i=0; i<10; i++){
		printf("%d ",a[i]);
	}
}
```
## 第五題 正整數平方總和
```C
#include <stdio.h>
int main()
{
	int n, a=0;
	scanf("%d",&n);
	for(int i=1; i<=n; i++){
		a+=i*i;
	}
	printf("%d",a);
}
```
## 第六題 兩數之間的3倍數總和
```C
#include <stdio.h>
int main()
{
	int a, b, n=0;
	scanf("%d%d",&a ,&b);
	for(int i=a; i<=b; i++){
		if(i%3==0) n+=i;
	}
	printf("%d",n);
}
```
## 第七題 判斷座標的象限
```C
#include <stdio.h>
int main()
{
	int a, b, n;
	scanf("%d%d",&a ,&b);
	if(a<0){
		if(b<0) n=3;
		else n=2;
	}
	else{
		if(b<0) n=4;
		else n=1;
	}
	printf("%d\n",n);
}
```
## 第八題 輸入n (n>0)， 求n之所有因數和
```C
#include <stdio.h>
int main()
{
	int n, a=0;
	scanf("%d",&n);
	for(int i=1; i<=n; i++){
		if(n%i==0) a+=i;
	}
	printf("%d",a);
}
```
