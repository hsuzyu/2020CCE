#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdlib.h>
char a[2000][80];
int compare(const void *p1,\const void *p2){
    return strcmp((char*)p1, (char*)p2);
}
int main()
{
    int n, s=1;
    scanf("%d",&n);
    char t[80];
    for(int i=0; i<n; i++){
        scanf("%s",a[i]);
        gets(t);
    }
    qsort(a, n, 80, compare);
    for(int i=0; i<n; i++){
        if(strcmp(a[i], a[i+1]==0)) s++;
        else{
            printf("%s %d\n",a[i], s);
            s=1;
        }
    }
}

