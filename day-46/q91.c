// Q91: Remove all vowels from a string.
#include <stdio.h>
int main(void){char s[1000],ch;int i,j=0;if(!fgets(s,sizeof s,stdin))return 0;for(i=0;s[i];i++){ch=s[i];if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')continue;s[j++]=ch;}s[j]='\0';printf("%s",s);return 0;}