// Q78: Find the sum of main diagonal elements for a square matrix.
#include <stdio.h>
#define MAX 100
int main(void){int r,c,a[MAX][MAX],i,j;long long sum=0;scanf("%d%d",&r,&c);
if(r<1||r>MAX||c<1||c>MAX)return 1;
for(i=0;i<r;i++)for(j=0;j<c;j++){scanf("%d",&a[i][j]);if(i==j)sum+=a[i][j];}
if(r!=c)printf("Matrix must be square\n");else printf("%lld\n",sum);return 0;}