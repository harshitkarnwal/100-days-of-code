// Retrospective completion date: 2026-10-21 (reconstructed)
// Q123: Count characters, whitespace-separated words, and lines in sample.txt.
#include <stdio.h>
#include <ctype.h>
int main(void){FILE*f=fopen("sample.txt","r");if(!f){perror("sample.txt");return 1;}long chars=0,words=0,lines=0;int c,inword=0,last=-1;while((c=fgetc(f))!=EOF){chars++;if(c=='\n')lines++;if(isspace((unsigned char)c))inword=0;else if(!inword){words++;inword=1;}last=c;}if(ferror(f)){fclose(f);return 1;}if(chars>0&&last!='\n')lines++;printf("Characters: %ld\nWords: %ld\nLines: %ld\n",chars,words,lines);fclose(f);return 0;}
