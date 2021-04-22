# 第八周

## 第一題
```C
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
```
## 第二題
```C
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char a[100][10];
int compare(const void *p1,\const void *p2){
    return strcmp((char*)p1, (char*)p2);
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%s",a[i]);
    }
    qsort(a, n, 10, compare);
    for(int i=0; i<n; i++){
        printf("%s\n",a[i]);
    }
}
```
## 第三題
```C
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
        printf("%s\n",a[i]);
    }
}
```
## 第四題
```C
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
```
## 第五題
```C
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
```
## 第六題
```C
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
```
## 第七題
```C
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
```
