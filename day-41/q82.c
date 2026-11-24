// Q82: Print each character of a string on a new line.
#include <stdio.h>
int main(void){char s[1000];int i;if(!fgets(s,sizeof s,stdin))return 0;for(i=0;s[i]&&s[i]!='\n';i++)printf("%c\n",s[i]);return 0;}