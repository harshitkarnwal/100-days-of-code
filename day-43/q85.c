// Q85: Reverse a string.
#include <stdio.h>
int main(void){char s[1000],t;int n=0,i,j;if(!fgets(s,sizeof s,stdin))return 0;while(s[n]&&s[n]!='\n')n++;s[n]='\0';for(i=0,j=n-1;i<j;i++,j--){t=s[i];s[i]=s[j];s[j]=t;}printf("%s\n",s);return 0;}