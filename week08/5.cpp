#include <stdio.h>
#include <string.h>
char tr[1000000][32];
int main()
{
    int t;
    scanf("%d\n\n",&t);
    int n=0;
    for(int i=0; ; i++){
        char* now=gets(tr[i]);
        if(now==NULL){
            n=i;
            break;
        }
        if(strcmp(tr[i],"")==0){
            n=i;
            break;
        }
    }
    for(int i=0; i<n; i++){
        printf("%s\n",tr[i]);
    }
}
