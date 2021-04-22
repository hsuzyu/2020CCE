#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char tr[1000000][32];
int c(const void *p1, const void *p2)
{
    return strcmp((char*)p1, (char*)p2);
}
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
    qsort(tr, n, 32, c);
    for(int i=0; i<n; i++){
        printf("%s\n",tr[i]);
    }
}

