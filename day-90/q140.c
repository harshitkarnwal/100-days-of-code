// Retrospective completion date: 2026-11-07 (reconstructed)
// Q140: Store an enum gender in a struct and print the person's gender.
#include <stdio.h>
#include <string.h>
enum Gender{MALE,FEMALE,OTHER};
struct Person{enum Gender gender;};
int main(void){char s[20];struct Person p;if(scanf("%19s",s)!=1)return 1;if(!strcmp(s,"MALE"))p.gender=MALE;else if(!strcmp(s,"FEMALE"))p.gender=FEMALE;else if(!strcmp(s,"OTHER"))p.gender=OTHER;else{puts("Invalid gender");return 0;}const char*names[]={"Male","Female","Other"};puts(names[p.gender]);return 0;}
