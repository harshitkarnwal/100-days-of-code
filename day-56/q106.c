// Q106: Next greater element to the right, using the required nested-loop method.
#include <stdio.h>
#include <stdlib.h>
int main(void){int n,*a;if(scanf("%d",&n)!=1||n<0)return 1;a=malloc((size_t)(n?n:1)*sizeof *a);if(!a)return 1;for(int i=0;i<n;i++)if(scanf("%d",&a[i])!=1){free(a);return 1;}for(int i=0;i<n;i++){int ans=-1;for(int j=i+1;j<n;j++)if(a[j]>a[i]){ans=a[j];break;}printf(i==0?"%d":" %d",ans);}putchar('\n');free(a);return 0;}
