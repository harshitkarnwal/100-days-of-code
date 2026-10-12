// Retrospective completion date: 2026-10-12 (reconstructed)
// Q114: Length of the longest substring without repeating characters.
#include <stdio.h>
#include <string.h>
int main(void){char s[10005];int last[256],left=0,best=0;if(!fgets(s,sizeof s,stdin))return 0;s[strcspn(s,"\r\n")]=0;for(int i=0;i<256;i++)last[i]=-1;for(int i=0;s[i];i++){unsigned char c=(unsigned char)s[i];if(last[c]>=left)left=last[c]+1;last[c]=i;if(i-left+1>best)best=i-left+1;}printf("%d\n",best);return 0;}
