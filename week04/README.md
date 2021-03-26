## 第一題 除惡務盡
```C
#include <stdio.h>
#include <string.h>
int main()
{
	char a[100]={0};
	scanf("%s",&a);
	size_t m=strlen(a);
	for(int i=0; i<m; i++){
		if(a[i]!='2') printf("%c",a[i]);
	}
	printf("\n");
}
```

## 第二題 擲骰統計
```C
#include <stdio.h>
#include <string.h>
int main()
{
	char n[100]={0};
	int  a=0, b=0, c=0, d=0, e=0, f=0;
	scanf("%s",&n);
	size_t m=strlen(n);
	for(int i=0; i<m; i++){
		if(n[i]=='1') a++;
		else if(n[i]=='2') b++;
		else if(n[i]=='3') c++;
		else if(n[i]=='4') d++;
		else if(n[i]=='5') e++;
		else f++;
	}
	printf("1:%d\n2:%d\n3:%d\n4:%d\n5:%d\n6:%d\n",a, b, c, d, e, f);
}
```

## 第三題 函數找整數的最大數字
```C
#include<iostream>
using namespace std;
int max_digit(int n){
	int M;
	scanf("%s",&n);
	M=n%10;
	while(n>0){
		if(n%10>M) M=n%10;
		n/=10;
	}
	return M;
}
int main(){
  int n;cin>>n;
  cout<<"["<<max_digit(n)<<"]";
  return 0;
}
/* 上方C++ 的 main 函數 等價於 下方 C 的 main 函數
int main(void){
  int n;
  scanf("%d", &n);
  printf("[%d]", max_digit(n));
  return 0;
}
*/
```

## 第四題 星星等腰三角
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1; i<=n; i++){
		for(int j=n-i; j>0; j--){
			printf(" ");
		}
		for(int k=1; k<=2*i-1; k++){
			printf("*");
		}
		printf("\n");
	}
}
```

## 第五題 分開整數的每個數字
```C
#include <stdio.h>
int main()
{
	char a[5];
	scanf("%s",&a);
	for(int i=0; i<5; i++){
		printf("%c",a[i]);
		if(i!=4) printf("   ");
	}
}
```

## 第六題 字元判別
```C
#include <stdio.h>
int main()
{
	char a;
	scanf("%c",&a);
	if(a>='A' && a<='Z') printf("U");
	else if(a>='a' && a<='z') printf("L");
	else if(a>='0' && a<='9') printf("D");
	else printf("O");
}
```

## 第七題 數字之首
```C
#include <stdio.h>
int main()
{
	char N[100];
	scanf("%s",&N);
	printf("%c",N[0]);
}
```

## 第八題 輸出從0到N的偶數 
```C
#include <stdio.h>
int main()
{
	int N;
	scanf("%d",&N);
	for(int i=1; i<=N; i++){
		if(i%2==0)printf("%d ",i);
	}
}
```
