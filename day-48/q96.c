// Q96: Reverse each word in a sentence without changing the word order.
#include <stdio.h>
int main(void){char s[2000],t;int i=0,j,start;if(!fgets(s,sizeof s,stdin))return 0;
while(s[i]&&s[i]!='\n'){while(s[i]==' ')i++;start=i;while(s[i]&&s[i]!='\n'&&s[i]!=' ')i++;j=i-1;while(start<j){t=s[start];s[start]=s[j];s[j]=t;start++;j--;}}
printf("%s",s);return 0;}