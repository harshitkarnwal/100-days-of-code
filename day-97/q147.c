// Retrospective completion date: 2026-11-14 (reconstructed)
// Q147: Store employee data in a binary file using fwrite() and read it using fread().
#include <stdio.h>
struct Employee{char name[100];int id;double salary;};
int main(void){struct Employee e,readback;if(scanf("%99s %d %lf",e.name,&e.id,&e.salary)!=3)return 1;FILE*f=fopen("employee.dat","wb");if(!f){perror("employee.dat");return 1;}if(fwrite(&e,sizeof e,1,f)!=1){fclose(f);return 1;}if(fclose(f)!=0)return 1;f=fopen("employee.dat","rb");if(!f){perror("employee.dat");return 1;}if(fread(&readback,sizeof readback,1,f)!=1){fclose(f);return 1;}fclose(f);printf("Employee: %s | ID: %d | Salary: %.2f\n",readback.name,readback.id,readback.salary);return 0;}
