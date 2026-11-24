// Q88: Replace spaces with hyphens in a string.
#include <stdio.h>
int main(void){char s[1000];int i;if(!fgets(s,sizeof s,stdin))return 0;for(i=0;s[i];i++)if(s[i]==' ')s[i]='-';printf("%s",s);return 0;}