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
/* �W��C++ �� main ��� ������ �U�� C �� main ���
int main(void){
  int n;
  scanf("%d", &n);
  printf("[%d]", max_digit(n));
  return 0;
}
*/
