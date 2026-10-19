// Retrospective completion date: 2026-10-19 (reconstructed)
// Q121: Read a name and age, then save them to info.txt using fprintf().
#include <stdio.h>
int main(void){char name[200];int age;if(!fgets(name,sizeof name,stdin))return 1;for(int i=0;name[i];i++)if(name[i]=='\n'||name[i]=='\r'){name[i]=0;break;}if(scanf("%d",&age)!=1)return 1;FILE*f=fopen("info.txt","w");if(!f){perror("info.txt");return 1;}fprintf(f,"Name: %s\nAge: %d\n",name,age);if(fclose(f)!=0)return 1;puts("File created successfully! Data written to info.txt");return 0;}
