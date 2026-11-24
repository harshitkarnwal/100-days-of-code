// Q112: Maximum contiguous subarray sum using Kadane's algorithm.
#include <stdio.h>
#include <stdlib.h>
int main(void){int n,*a;long long best,cur;if(scanf("%d",&n)!=1||n<1)return 1;a=malloc((size_t)n*sizeof *a);if(!a)return 1;for(int i=0;i<n;i++)if(scanf("%d",&a[i])!=1){free(a);return 1;}best=cur=a[0];for(int i=1;i<n;i++){cur=(cur+a[i]>a[i])?cur+a[i]:a[i];if(cur>best)best=cur;}printf("%lld\n",best);free(a);return 0;}
