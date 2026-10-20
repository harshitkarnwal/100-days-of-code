// Retrospective completion date: 2026-10-20 (reconstructed)
// Q122: Display every line in info.txt using fgets() until EOF.
#include <stdio.h>
int main(void){char line[1024];FILE*f=fopen("info.txt","r");if(!f){perror("info.txt");return 1;}while(fgets(line,sizeof line,f))fputs(line,stdout);if(ferror(f)){fclose(f);return 1;}fclose(f);return 0;}
