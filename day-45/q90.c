// Q90: Toggle case of each character in a string.
#include <stdio.h>
int main(void){char s[1000];int i;if(!fgets(s,sizeof s,stdin))return 0;for(i=0;s[i];i++){if(s[i]>='a'&&s[i]<='z')s[i]=(char)(s[i]-'a'+'A');else if(s[i]>='A'&&s[i]<='Z')s[i]=(char)(s[i]-'A'+'a');}printf("%s",s);return 0;}