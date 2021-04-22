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
    printf("%s ",tr[0]);
    int a=1;
    for(int i=0; i<n-1; i++){
        if(strcmp(tr[i], tr[i+1])!=0){
            printf("%.4f\n",100*a/(float)n);
            printf("%s",tr[i+1]);
            a=1;
        }
        else a++;
    }
    printf("%.4f\n",100*a/(float)n);
}


