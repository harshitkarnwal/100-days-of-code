// Q83: Count vowels and consonants in a string.
#include <stdio.h>
#include <ctype.h>
int main(void){char s[1000],ch;int i,v=0,c=0;if(!fgets(s,sizeof s,stdin))return 0;
for(i=0;s[i]&&s[i]!='\n';i++){ch=(char)tolower((unsigned char)s[i]);if(ch>='a'&&ch<='z'){if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')v++;else c++;}}
printf("Vowels=%d, Consonants=%d\n",v,c);return 0;}