// Q81: Count characters in a string without using built-in length functions.
#include <stdio.h>
int main(void){char s[1000];int i=0;if(!fgets(s,sizeof s,stdin))return 0;while(s[i]&&s[i]!='\n')i++;printf("%d\n",i);return 0;}