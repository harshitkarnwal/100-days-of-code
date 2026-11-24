// Q124: Copy a source file to a destination file using fgetc() and fputc().
#include <stdio.h>
int main(void){char src[256],dst[256];int c;if(scanf("%255s %255s",src,dst)!=2)return 1;FILE*in=fopen(src,"rb");if(!in){perror(src);return 1;}FILE*out=fopen(dst,"wb");if(!out){perror(dst);fclose(in);return 1;}int failed=0;while((c=fgetc(in))!=EOF)if(fputc(c,out)==EOF){failed=1;break;}if(ferror(in))failed=1;if(fclose(in)!=0)failed=1;if(fclose(out)!=0)failed=1;if(failed)return 1;printf("File copied successfully to %s\n",dst);return 0;}
