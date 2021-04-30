#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char line[1000];
char tree[1000000][32];
int compare(const void *p1, const void *p2)
{
	return strcmp((char*)p1, (char*)p2);
}
int main()
{
	int T;
	scanf("%d\n\n",&T);
	for(int t=0; t<T; t++){
		int n=0;
		while(gets(line)!=NULL){
			if(strcmp(line,"")==0) break;
			strcpy(tree[n], line);
			//printf("%s\n", line);
			n++;
		}
		//printf("tree? %d\n",n);
		qsort(tree, n, 32, compare);

		if(t>0) printf("\n");

		int a=1;
		printf("%s ",tree[0]);

		for(int i=0; i<n-1; i++){
			if(strcmp(tree[i],tree[i+1])==0) a++;
			else{
				printf("%.4f\n",100*a/(float)n);
				a=1;
				printf("%s ",tree[i+1]);
			}
		}
		printf("%.4f\n",100*a/(float)n);
	}
}

