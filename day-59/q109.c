// Q109: Maximum sum among all contiguous subarrays of size k.
#include <stdio.h>
#include <stdlib.h>
int main(void){int n,k,*a;long long sum=0,best;if(scanf("%d",&n)!=1||n<0)return 1;a=malloc((size_t)(n?n:1)*sizeof *a);if(!a)return 1;for(int i=0;i<n;i++)if(scanf("%d",&a[i])!=1){free(a);return 1;}if(scanf("%d",&k)!=1||k<1||k>n){free(a);return 1;}for(int i=0;i<k;i++)sum+=a[i];best=sum;for(int i=k;i<n;i++){sum+=a[i]-a[i-k];if(sum>best)best=sum;}printf("%lld\n",best);free(a);return 0;}
