// Q77: Check if the elements on both diagonals of a square matrix are distinct.
#include <stdio.h>
#define MAX 100
int main(void){int n,a[MAX][MAX],v[2*MAX],k=0,i,j,ok=1;scanf("%d",&n);if(n<1||n>MAX)return 1;
for(i=0;i<n;i++)for(j=0;j<n;j++)scanf("%d",&a[i][j]);
for(i=0;i<n;i++){v[k++]=a[i][i];if(i!=n-1-i)v[k++]=a[i][n-1-i];}
for(i=0;i<k;i++)for(j=i+1;j<k;j++)if(v[i]==v[j])ok=0;
printf("%s\n",ok?"True":"False");return 0;}