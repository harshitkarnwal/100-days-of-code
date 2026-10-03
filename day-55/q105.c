// Retrospective completion date: 2026-10-03 (reconstructed)
// Q105: Find an element occurring strictly more than n/2 times.
#include <stdio.h>
#include <stdlib.h>
int main(void){int n,*a,candidate=0,count=0;if(scanf("%d",&n)!=1||n<0)return 1;a=malloc((size_t)(n?n:1)*sizeof *a);if(!a)return 1;for(int i=0;i<n;i++){if(scanf("%d",&a[i])!=1){free(a);return 1;}if(count==0)candidate=a[i],count=1;else if(a[i]==candidate)count++;else count--;}count=0;for(int i=0;i<n;i++)if(a[i]==candidate)count++;printf("%d\n",count>n/2?candidate:-1);free(a);return 0;}
