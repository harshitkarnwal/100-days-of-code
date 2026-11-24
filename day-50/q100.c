// Q100: Print all substrings ordered by starting position, then by length.
#include <stdio.h>
int main(void){char s[1000];int n=0,i,j,k,first=1;if(!fgets(s,sizeof s,stdin))return 0;while(s[n]&&s[n]!='\n')n++;
for(i=0;i<n;i++)for(j=i;j<n;j++){if(!first)printf(",");for(k=i;k<=j;k++)putchar(s[k]);first=0;}printf("\n");return 0;}