#include <stdio.h>
char a[100][10];
int main()
{
    int n;
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        scanf("%s",a[i]);
    }
    for(int i=0; i<n; i++){
        printf("%s\n",a[i]);
    }
}
