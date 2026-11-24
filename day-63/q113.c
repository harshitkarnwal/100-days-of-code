// Q113: Find the kth smallest array element (duplicates count separately).
#include <stdio.h>
#include <stdlib.h>
int cmp(const void*x,const void*y){int a=*(const int*)x,b=*(const int*)y;return (a>b)-(a<b);}
int main(void){int n,k,*a;if(scanf("%d",&n)!=1||n<1)return 1;a=malloc((size_t)n*sizeof *a);if(!a)return 1;for(int i=0;i<n;i++)if(scanf("%d",&a[i])!=1){free(a);return 1;}if(scanf("%d",&k)!=1||k<1||k>n){free(a);return 1;}qsort(a,n,sizeof *a,cmp);printf("%d\n",a[k-1]);free(a);return 0;}
