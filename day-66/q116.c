// Q116: Find two distinct indices whose values add up to target.
#include <stdio.h>
#include <stdlib.h>
int main(void){int n,target,*a;if(scanf("%d",&n)!=1||n<0)return 1;a=malloc((size_t)(n?n:1)*sizeof *a);if(!a)return 1;for(int i=0;i<n;i++)if(scanf("%d",&a[i])!=1){free(a);return 1;}if(scanf("%d",&target)!=1){free(a);return 1;}for(int i=0;i<n;i++)for(int j=i+1;j<n;j++)if((long long)a[i]+a[j]==target){printf("%d %d\n",i,j);free(a);return 0;}puts("-1 -1");free(a);return 0;}
