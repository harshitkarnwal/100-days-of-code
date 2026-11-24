// Q93: Check if two strings are anagrams (ignoring spaces and letter case).
#include <stdio.h>
#include <ctype.h>
int main(void){char a[1000],b[1000];int f[256]={0},i,ok=1;if(!fgets(a,sizeof a,stdin)||!fgets(b,sizeof b,stdin))return 0;
for(i=0;a[i]&&a[i]!='\n';i++){unsigned char c=(unsigned char)a[i];if(!isspace(c))f[tolower(c)]++;}
for(i=0;b[i]&&b[i]!='\n';i++){unsigned char c=(unsigned char)b[i];if(!isspace(c))f[tolower(c)]--;}
for(i=0;i<256;i++)if(f[i])ok=0;printf("%s\n",ok?"Anagrams":"Not anagrams");return 0;}