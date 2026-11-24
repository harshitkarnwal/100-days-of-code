// Q118: Find the missing value from the range 0 through n using XOR.
#include <stdio.h>
int main(void){int n,x;if(scanf("%d",&n)!=1||n<0)return 1;x=n;for(int i=0,v;i<n;i++){if(scanf("%d",&v)!=1)return 1;x^=i^v;}printf("%d\n",x);return 0;}
