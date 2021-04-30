# 第十周

## 第一題 最大公因數gcd 
```C
#include <stdio.h>
int main()
{
	int a, b, m, n;
	printf("Enter two integers: \n");
	scanf("%d%d",&a, &b);
	m=a;
	n=b;
	while(a>0 && b>0){
		if(a>b) a%=b;
		else b%=a;
	}
	if(a==0) printf("The greatest common divisor of %d and %d is %d\n", m, n, b);
	else printf("The greatest common divisor of %d and %d is %d\n", m, n, a);
}
```
## 第二題 字串長度
```C
#include <stdio.h>
#include <string.h>
int main()
{
	char a[100], b[100];
	scanf("%s %s",&a ,&b);
	if(strlen(a)>strlen(b)) printf("1");
	else if(strlen(a)<strlen(b)) printf("-1");
	else {
		if(strcmp(a,b)>0) printf("1");
		else printf("0");
	}
}

```
## 第三題 函數判斷質數 
```C
#include <iostream>
using namespace std;
int prime(int n)
{
	int a=0, b=1;
	for(int i=1; i<=n; i++){
		if(n%i==0) a++;
	}
	if(a==2) b=1;
	else b=0;
	return b;
}
int main(){
  int n;cin>>n;
  cout<<"["<<prime(n)<<"]";
  return 0;
}
/* 上方 C++ 的 main 函數 等價於 下方 C 的 main 函數
int main(void){
    int n;
    scanf("%d", &n);
    printf("[%d]", prime(n));
    return 0;
}
*/
```
## 第四題 判斷迴文
```C
#include <stdio.h>
#include <string.h>
int main()
{
	char n[100], a=1;
	scanf("%s",n);
	int t=strlen(n);
	for(int i=0; i<t; i++){
		if(n[i]!=n[t-i-1]){
			a=0;
			break;
		}
	}
	if(a==1) printf("YES");
	else printf("NO");
}
```
## 第五題 計算餘數及列印 
```C
#include <stdio.h>
int main()
{
	int x, y;
	printf("Enter two numbers: ");
	scanf("%d%d",&x ,&y);
	printf("The remainder is %d\n", x%y);
}
```
## 第六題 判別正方形 
```C
#include <stdio.h>
int main()
{
	int a, b;
	printf("Enter two numbers:  ");
	scanf("%d%d",&a ,&b);
	if(a==b) printf("It is a square ");
	else printf("It is not a square ");
}
```
## 第七題 將一連串整數相乘 
```C
#include <stdio.h>
int main()
{
	int n, l[100], a=1;
	printf("Enter the number of values to be processed: ");
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		printf("Enter a value: ");
		scanf("%d",&l[i]);
		a*=l[i];
	}
	printf("Product of the %d values is %d",n, a);
}
```
## 第八題 平年月份的天數 
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n==4 || n==6 || n==9 || n==11) printf("30");
	else if(n==2) printf("28");
	else printf("31");
}
```

