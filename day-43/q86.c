// Q86: Check if a string is a palindrome.
#include <stdio.h>
int main(void){char s[1000];int n=0,i,ok=1;if(!fgets(s,sizeof s,stdin))return 0;while(s[n]&&s[n]!='\n')n++;for(i=0;i<n/2;i++)if(s[i]!=s[n-1-i])ok=0;printf("%s\n",ok?"Palindrome":"Not palindrome");return 0;}