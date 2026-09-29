// Retrospective completion date: 2026-09-29 (reconstructed)
// Q101: Find the first and last occurrence of target in a sorted array.
#include <stdio.h>
#include <stdlib.h>
int lower(int a[],int n,int x){int l=0,r=n;while(l<r){int m=l+(r-l)/2;if(a[m]<x)l=m+1;else r=m;}return l;}
int upper(int a[],int n,int x){int l=0,r=n;while(l<r){int m=l+(r-l)/2;if(a[m]<=x)l=m+1;else r=m;}return l;}
int main(void){int n,x,*a;if(scanf("%d",&n)!=1||n<0)return 1;a=malloc((size_t)(n?n:1)*sizeof *a);if(!a)return 1;for(int i=0;i<n;i++)if(scanf("%d",&a[i])!=1){free(a);return 1;}if(scanf("%d",&x)!=1){free(a);return 1;}int l=lower(a,n,x),r=upper(a,n,x)-1;if(l==n||a[l]!=x)printf("-1,-1\n");else printf("%d,%d\n",l,r);free(a);return 0;}
