// Retrospective completion date: 2026-11-09 (reconstructed)
// Q142: Store five student records in an array of structures and display them.
#include <stdio.h>
struct Student{char name[100];int roll;float marks;};
int main(void){struct Student s[5];for(int i=0;i<5;i++)if(scanf("%99s %d %f",s[i].name,&s[i].roll,&s[i].marks)!=3)return 1;puts("Name | Roll | Marks");for(int i=0;i<5;i++)printf("%s | %d | %.2f\n",s[i].name,s[i].roll,s[i].marks);return 0;}
