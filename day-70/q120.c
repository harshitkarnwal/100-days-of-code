// Q120: Convert a line to title-style sentence case (capitalize each word).
#include <stdio.h>
#include <ctype.h>
int main(void){char s[5000];int start=1;if(!fgets(s,sizeof s,stdin))return 0;for(int i=0;s[i]&&s[i]!='\n'&&s[i]!='\r';i++){unsigned char c=(unsigned char)s[i];if(isspace(c))start=1;else{if(start)s[i]=(char)toupper(c);start=0;}}for(int i=0;s[i]&&s[i]!='\n'&&s[i]!='\r';i++)putchar(s[i]);putchar('\n');return 0;}
