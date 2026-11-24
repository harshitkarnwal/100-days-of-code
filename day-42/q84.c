// Q84: Convert a lowercase string to uppercase without using built-in functions.
#include <stdio.h>
int main(void){char s[1000];int i;if(!fgets(s,sizeof s,stdin))return 0;for(i=0;s[i];i++)if(s[i]>='a'&&s[i]<='z')s[i]=(char)(s[i]-'a'+'A');printf("%s",s);return 0;}