// Q127: Convert lowercase letters in input.txt to uppercase in output.txt.
#include <stdio.h>
#include <ctype.h>
int main(void){FILE*in=fopen("input.txt","r");if(!in){perror("input.txt");return 1;}FILE*out=fopen("output.txt","w");if(!out){perror("output.txt");fclose(in);return 1;}int c;while((c=fgetc(in))!=EOF)if(fputc(toupper((unsigned char)c),out)==EOF){fclose(in);fclose(out);return 1;}int bad=ferror(in)||fclose(in)!=0||fclose(out)!=0;if(bad)return 1;puts("Conversion complete. Result saved in output.txt");return 0;}
