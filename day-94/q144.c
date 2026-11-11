// Retrospective completion date: 2026-11-11 (reconstructed)
// Q144: Pass a structure to a function by value and print its members.
#include <stdio.h>
struct Student{char name[100];int roll;float marks;};
void display(struct Student s){printf("Name: %s | Roll: %d | Marks: %.0f\n",s.name,s.roll,s.marks);}
int main(void){struct Student s;if(scanf("%99s %d %f",s.name,&s.roll,&s.marks)!=3)return 1;display(s);return 0;}
