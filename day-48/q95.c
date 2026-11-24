// Q95: Check if one string is a rotation of another.
#include <stdio.h>
int main(void){char a[1000],b[1000],d[2000];int n=0,m=0,i,j,ok=0;if(!fgets(a,sizeof a,stdin)||!fgets(b,sizeof b,stdin))return 0;
while(a[n]&&a[n]!='\n')n++;while(b[m]&&b[m]!='\n')m++;
if(n==m){for(i=0;i<n;i++)d[i]=a[i];for(i=0;i<n;i++)d[n+i]=a[i];d[2*n]='\0';
for(i=0;i<=n;i++){for(j=0;j<n&&d[i+j]==b[j];j++);if(j==n){ok=1;break;}}}
printf("%s\n",ok?"Rotation":"Not rotation");return 0;}