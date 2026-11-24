// Q98: Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <ctype.h>
int main(void){char s[1000];int start[100],end[100],n=0,i=0,k,j;if(!fgets(s,sizeof s,stdin))return 0;
while(s[i]&&s[i]!='\n'){while(s[i]&&isspace((unsigned char)s[i]))i++;if(!s[i]||s[i]=='\n')break;start[n]=i;while(s[i]&&!isspace((unsigned char)s[i])&&s[i]!='\n')i++;end[n]=i;if(++n==100)break;}
for(k=0;k<n-1;k++)printf("%c.",s[start[k]]);if(n>1)printf(" ");if(n>0)for(j=start[n-1];j<end[n-1];j++)putchar(s[j]);printf("\n");return 0;}