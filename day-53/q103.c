// Q103: Find the leftmost pivot index where left and right sums are equal.
#include <stdio.h>
#include <stdlib.h>
int main(void){int n,*a;long long total=0,left=0;if(scanf("%d",&n)!=1||n<0)return 1;a=malloc((size_t)(n?n:1)*sizeof *a);if(!a)return 1;for(int i=0;i<n;i++){if(scanf("%d",&a[i])!=1){free(a);return 1;}total+=a[i];}for(int i=0;i<n;i++){if(left==total-left-a[i]){printf("%d\n",i);free(a);return 0;}left+=a[i];}puts("-1");free(a);return 0;}
