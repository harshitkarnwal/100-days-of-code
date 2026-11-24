// Q126: Open the requested file, report a missing file, or print its contents.
#include <stdio.h>
int main(void){char name[256],line[1024];if(!fgets(name,sizeof name,stdin))return 1;for(int i=0;name[i];i++)if(name[i]=='\n'||name[i]=='\r'){name[i]=0;break;}FILE*f=fopen(name,"r");if(!f){puts("Error: File does not exist!");return 0;}puts("File opened successfully.");while(fgets(line,sizeof line,f))fputs(line,stdout);int bad=ferror(f);fclose(f);return bad?1:0;}
