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
/* �W��C++ main �禡 ���P�� �U�� C �� main �禡
int main(void){
  int a, b, c, d;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  printf("%d",  max(a,b,c,d) - min(a,b,c,d) );
  return 0;
}
*/
