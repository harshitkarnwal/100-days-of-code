// Q97: Print the initials of every word in a name.
#include <stdio.h>
#include <ctype.h>
int main(void){char s[1000];int i=0,in=0;if(!fgets(s,sizeof s,stdin))return 0;while(s[i]&&s[i]!='\n'){if(!isspace((unsigned char)s[i])){if(!in)printf("%c.",s[i]);in=1;}else in=0;i++;}printf("\n");return 0;}