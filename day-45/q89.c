// Q89: Count frequency of a given character in a string.
// Input: the string on the first line and the target character on the second.
#include <stdio.h>
int main(void){char s[1000],target;int i,count=0;if(!fgets(s,sizeof s,stdin))return 0;if(scanf(" %c",&target)!=1)return 0;for(i=0;s[i]&&s[i]!='\n';i++)if(s[i]==target)count++;printf("%d\n",count);return 0;}