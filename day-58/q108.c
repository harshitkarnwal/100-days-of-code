// Q108: Product of array except self, without division and in O(n) time.
#include <stdio.h>
#include <stdlib.h>
int main(void){int n,*a;long long *out;if(scanf("%d",&n)!=1||n<0)return 1;a=malloc((size_t)(n?n:1)*sizeof *a);out=malloc((size_t)(n?n:1)*sizeof *out);if(!a||!out){free(a);free(out);return 1;}for(int i=0;i<n;i++)if(scanf("%d",&a[i])!=1){free(a);free(out);return 1;}long long p=1;for(int i=0;i<n;i++){out[i]=p;p*=a[i];}p=1;for(int i=n-1;i>=0;i--){out[i]*=p;p*=a[i];}for(int i=0;i<n;i++)printf(i==0?"%lld":" %lld",out[i]);putchar('\n');free(a);free(out);return 0;}
