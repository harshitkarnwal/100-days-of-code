// Retrospective completion date: 2026-10-08 (reconstructed)
// Q110: Maximum value in every sliding window of size k.
#include <stdio.h>
#include <stdlib.h>
int main(void){int n,k,*a;if(scanf("%d",&n)!=1||n<0)return 1;a=malloc((size_t)(n?n:1)*sizeof *a);if(!a)return 1;for(int i=0;i<n;i++)if(scanf("%d",&a[i])!=1){free(a);return 1;}if(scanf("%d",&k)!=1||k<1||k>n){free(a);return 1;}for(int i=0;i<=n-k;i++){int m=a[i];for(int j=i+1;j<i+k;j++)if(a[j]>m)m=a[j];printf(i==0?"%d":" %d",m);}putchar('\n');free(a);return 0;}
