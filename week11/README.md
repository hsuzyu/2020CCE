# 第十一周

## 第一題 字串中的數字個數
```C
#include <stdio.h>
#include <string.h>
int main()
{
	char a[81];
	int n=0;
	scanf("%s",a);
	for(int i=0; i<strlen(a); i++){
		if(a[i]>='0' && a[i]<='9') n++;
	}
	printf("%d",n);
}
```
## 第二題 利用自訂函式最大值max與最小值min求出兩者之差
```C
#include<iostream>
using namespace std;
#include <stdio.h>
int max(int a, int b, int c, int d)
{
	int M=a;
	if(M<b) M=b;
	if(M<c) M=c;
	if(M<d) M=d;
	return M;
}
int min(int a, int b, int c, int d)
{
	int m=a;
	if(m>b) m=b;
	if(m>c) m=c;
	if(m>d) m=d;
	return m;
}
int main(){
  int a,b,c,d;cin>>a>>b>>c>>d;
  cout<<(max(a,b,c,d)-min(a,b,c,d));
  return 0;
}
/* 上方C++ main 函式 等同於 下方 C 的 main 函式
int main(void){
  int a, b, c, d;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  printf("%d",  max(a,b,c,d) - min(a,b,c,d) );
  return 0;
}
*/
```
## 第三題 奇數之和
```C
#include <stdio.h>
int main()
{
	int N, a=0;
	scanf("%d",&N);
	for(int i=1; i<=N; i++){
		if(i%2!=0) a+=i;
	}
	printf("%d",a);
}
```
## 第四題 兩數間可被7整除的數
```C
#include <stdio.h>
int main()
{
	int a, b, t;
	scanf("%d%d",&a ,&b);
	if(a>b){
		t=a;
		a=b;
		b=t;
	}
	for(int i=a; i<=b; i++){
		if(i%7==0) printf("%d ",i);
	}
}
```
## 第五題 整數二元四則運算
```C
#include <stdio.h>
int main()
{
	int a, b;
	char c;
	scanf("%d %c %d",&a ,&c, &b);
	if(c=='+') printf("%d",a+b);
	else if(c=='-') printf("%d",a-b);
	else if(c=='*') printf("%d",a*b);
	else printf("%d",a/b);
}
```
## 第六題 幾日為星期幾
```C
#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	a%=7;
	printf("%d",a-1);
}
```
## 第七題 零錢總額
```C
#include <stdio.h>
int main()
{
	int a, b, c;
	scanf("%d%d%d",&a ,&b ,&c);
	printf("%d",50*a+5*b+1*c);
}
```
## 第八題 兩數平方差
```C
#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d%d",&a ,&b);
	printf("%d",a*a-b*b);
}
```
