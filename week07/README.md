# 第七周

## 第一題 迴文判斷
```C
#include <stdio.h>
int main()
{
	char n[4];
	int a=0;
	scanf("%s",n);
	for(int i=0; i<2; i++){
		if(n[i]==n[3-i]) a=1;
		else {
			a=0;
			break;
		}
	}
	if(a==1) printf("YES\n");
	else printf("NO\n");
}

```
## 第二題 函數反序排列數字
```C
#include <stdio.h>
int f(int n)
{
	int a=0;
	while(n>0){
		a=a*10+n%10;
		n/=10;
	}
	return a;
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d\n",f(n));
}


```
## 第三題 陣列找出現次數
```C
#include <stdio.h>
int main()
{
	int n[10], a=0, b;
	for(int i=0; i<10; i++){
		scanf("%d",&n[i]);
		if(n[i]==0) break;
	}
	scanf("%d",&b);
	for(int i=0; i<10; i++){
		if(n[i]==b) a++;
	}
	printf("%d\n",a);
}
```
## 第四題 判斷大小
```C
#include <stdio.h>
int f(int a,int b){
	if(a>b) return 1;
	else if(a<b) return -1;
	else return 0;
}
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d",f(a,b));
    return 0;
}

```
## 第五題 計算一列整數的總和
```C
#include <stdio.h>
int main()
{
	int n=0, a=0;
	while(n!=999){
		a+=n;
		printf("Enter an integer ( 999 to end ): \n");
		scanf("%d",&n);
	}
	printf("The total is: %d",a);
}
```
## 第六題 計算餘數
```C
#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d%d",&a,&b);
	printf("%d",a%b);
}
```
## 第七題 整數轉換等級
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n>=90) printf("A");
	else if(n>=80) printf("B");
	else if(n>=70) printf("C");
	else if(n>=60) printf("D");
	else printf("F");
}
```
## 第八題 計程車資計算
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n<=1500) printf("100");
	else if((n-1500)%250==0) printf("%d",(n-1500)/250*5+100);
	else printf("%d",((n-1500)/250+1)*5+100);
}
```
## 第九題 找零錢
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d=50*%d+10*%d+5*%d+1*%d",n, n/50, n%50/10, n%10/5, n%5);
}

```
