// Q94: Find the longest word in a sentence.
#include <stdio.h>
#include <ctype.h>
int main(void){char s[2000],best[2000];int i=0,start,len,bestLen=0,k;if(!fgets(s,sizeof s,stdin))return 0;
while(s[i]){while(s[i]&&isspace((unsigned char)s[i]))i++;start=i;while(s[i]&&!isspace((unsigned char)s[i]))i++;len=i-start;if(len>bestLen){bestLen=len;for(k=0;k<len;k++)best[k]=s[start+k];}}
best[bestLen]='\0';printf("%s\n",best);return 0;}