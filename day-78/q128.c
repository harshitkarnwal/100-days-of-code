// Retrospective completion date: 2026-10-26 (reconstructed)
// Q128: Count vowels and consonants in text.txt; ignore digits and symbols.
#include <stdio.h>
#include <ctype.h>
int main(void){FILE*f=fopen("text.txt","r");if(!f){perror("text.txt");return 1;}long v=0,cnt=0;int c;while((c=fgetc(f))!=EOF)if(isalpha((unsigned char)c)){int x=tolower((unsigned char)c);if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u')v++;else cnt++;}if(ferror(f)){fclose(f);return 1;}printf("Vowels: %ld\nConsonants: %ld\n",v,cnt);fclose(f);return 0;}
