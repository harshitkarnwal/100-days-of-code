// Q87: Count spaces, digits, and special characters in a string.
#include <stdio.h>
#include <ctype.h>
int main(void){char s[1000];int i,sp=0,d=0,other=0;if(!fgets(s,sizeof s,stdin))return 0;for(i=0;s[i]&&s[i]!='\n';i++){unsigned char ch=(unsigned char)s[i];if(ch==' ')sp++;else if(isdigit(ch))d++;else if(!isalpha(ch))other++;}printf("Spaces=%d, Digits=%d, Special=%d\n",sp,d,other);return 0;}