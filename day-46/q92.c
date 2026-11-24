// Q92: Find the first repeating lowercase alphabet in a string.
#include <stdio.h>
int main(void){char s[1000];int f[26]={0},i;if(!fgets(s,sizeof s,stdin))return 0;for(i=0;s[i]&&s[i]!='\n';i++)if(s[i]>='a'&&s[i]<='z')f[s[i]-'a']++;for(i=0;s[i]&&s[i]!='\n';i++)if(s[i]>='a'&&s[i]<='z'&&f[s[i]-'a']>1){printf("%c\n",s[i]);return 0;}printf("No repeating alphabet\n");return 0;}