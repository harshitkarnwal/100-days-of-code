// Retrospective completion date: 2026-10-29 (reconstructed)
// Q131: Print each weekday enum constant and its automatically assigned value.
#include <stdio.h>
enum Day{SUNDAY,MONDAY,TUESDAY,WEDNESDAY,THURSDAY,FRIDAY,SATURDAY};
int main(void){const char*names[]={"SUNDAY","MONDAY","TUESDAY","WEDNESDAY","THURSDAY","FRIDAY","SATURDAY"};for(int i=SUNDAY;i<=SATURDAY;i++)printf("%s = %d\n",names[i],i);return 0;}
