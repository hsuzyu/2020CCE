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
