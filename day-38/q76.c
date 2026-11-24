// Q76: Check if a matrix is symmetric.
#include <stdio.h>
#define MAX 100
int main(void){int r,c,a[MAX][MAX],i,j,ok=1;scanf("%d%d",&r,&c);
if(r<1||r>MAX||c<1||c>MAX)return 1;
for(i=0;i<r;i++)for(j=0;j<c;j++)scanf("%d",&a[i][j]);
if(r!=c)ok=0;else for(i=0;i<r;i++)for(j=i+1;j<c;j++)if(a[i][j]!=a[j][i])ok=0;
printf("%s\n",ok?"True":"False");return 0;}