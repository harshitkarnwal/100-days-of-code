// Q80: Multiply two matrices.
#include <stdio.h>
#define MAX 100
int main(void){int r1,c1,r2,c2,a[MAX][MAX],b[MAX][MAX],i,j,k;long long sum;
scanf("%d%d",&r1,&c1);if(r1<1||r1>MAX||c1<1||c1>MAX)return 1;
for(i=0;i<r1;i++)for(j=0;j<c1;j++)scanf("%d",&a[i][j]);
scanf("%d%d",&r2,&c2);if(r2<1||r2>MAX||c2<1||c2>MAX)return 1;
for(i=0;i<r2;i++)for(j=0;j<c2;j++)scanf("%d",&b[i][j]);
if(c1!=r2){printf("Matrix dimensions are incompatible\n");return 0;}
for(i=0;i<r1;i++){for(j=0;j<c2;j++){sum=0;for(k=0;k<c1;k++)sum+=(long long)a[i][k]*b[k][j];printf("%s%lld",j?" ":"",sum);}printf("\n");}return 0;}