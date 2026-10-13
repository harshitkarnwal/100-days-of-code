// Retrospective completion date: 2026-10-13 (reconstructed)
// Q115: Check whether two lowercase strings are anagrams.
#include <stdio.h>
#include <string.h>
int main(void){char a[10005],b[10005];int f[26]={0};if(scanf("%10000s %10000s",a,b)!=2)return 1;for(int i=0;a[i];i++)if(a[i]>='a'&&a[i]<='z')f[a[i]-'a']++;for(int i=0;b[i];i++)if(b[i]>='a'&&b[i]<='z')f[b[i]-'a']--;for(int i=0;i<26;i++)if(f[i]){puts("Not Anagram");return 0;}puts("Anagram");return 0;}
