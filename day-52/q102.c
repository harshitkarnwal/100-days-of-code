// Q102: Return the first index whose value is greater than or equal to x (ceil).
#include <stdio.h>
#include <stdlib.h>
int main(void){int n,x,*a;if(scanf("%d",&n)!=1||n<0)return 1;a=malloc((size_t)(n?n:1)*sizeof *a);if(!a)return 1;for(int i=0;i<n;i++)if(scanf("%d",&a[i])!=1){free(a);return 1;}if(scanf("%d",&x)!=1){free(a);return 1;}int l=0,r=n;while(l<r){int m=l+(r-l)/2;if(a[m]<x)l=m+1;else r=m;}printf("%d\n",l<n?l:-1);free(a);return 0;}
