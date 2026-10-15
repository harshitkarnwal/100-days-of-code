// Retrospective completion date: 2026-10-15 (reconstructed)
// Q117: Merge two already sorted arrays into one sorted array.
#include <stdio.h>
#include <stdlib.h>
int main(void){int m,n,*a,*b,i=0,j=0,first=1;if(scanf("%d",&m)!=1||m<0)return 1;a=malloc((size_t)(m?m:1)*sizeof *a);if(!a)return 1;for(i=0;i<m;i++)if(scanf("%d",&a[i])!=1){free(a);return 1;}if(scanf("%d",&n)!=1||n<0){free(a);return 1;}b=malloc((size_t)(n?n:1)*sizeof *b);if(!b){free(a);return 1;}for(j=0;j<n;j++)if(scanf("%d",&b[j])!=1){free(a);free(b);return 1;}i=j=0;while(i<m||j<n){int v;if(j==n||(i<m&&a[i]<=b[j]))v=a[i++];else v=b[j++];printf(first?"%d":" %d",v);first=0;}putchar('\n');free(a);free(b);return 0;}
