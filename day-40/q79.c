// Q79: Perform diagonal traversal of a matrix, alternating direction by diagonal.
#include <stdio.h>
#define MAX 100
int main(void){int r,c,a[MAX][MAX],d,i,j,first=1;scanf("%d%d",&r,&c);if(r<1||r>MAX||c<1||c>MAX)return 1;
for(i=0;i<r;i++)for(j=0;j<c;j++)scanf("%d",&a[i][j]);
for(d=0;d<r+c-1;d++){if(d%2==0){i=d<r?d:r-1;j=d-i;while(i>=0&&j<c){printf("%s%d",first?"":" ",a[i][j]);first=0;i--;j++;}}
else{j=d<c?d:c-1;i=d-j;while(j>=0&&i<r){printf("%s%d",first?"":" ",a[i][j]);first=0;i++;j--;}}}
printf("\n");return 0;}