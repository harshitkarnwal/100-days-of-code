// Q75: Add two matrices.
#include <stdio.h>
#define MAX 100
int main(void){int r1,c1,r2,c2,a[MAX][MAX],b[MAX][MAX],i,j;
scanf("%d%d",&r1,&c1);if(r1<1||r1>MAX||c1<1||c1>MAX)return 1;
for(i=0;i<r1;i++)for(j=0;j<c1;j++)scanf("%d",&a[i][j]);
scanf("%d%d",&r2,&c2);if(r1!=r2||c1!=c2){printf("Matrix dimensions must match\n");return 0;}
for(i=0;i<r2;i++)for(j=0;j<c2;j++)scanf("%d",&b[i][j]);
for(i=0;i<r1;i++){for(j=0;j<c1;j++)printf("%s%d",j?" ":"",a[i][j]+b[i][j]);printf("\n");}return 0;}