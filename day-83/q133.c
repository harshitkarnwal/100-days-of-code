// Q133: Use an enum to identify a month and print its number of days.
#include <stdio.h>
#include <string.h>
enum Month{JAN=1,FEB,MAR,APR,MAY,JUN,JUL,AUG,SEP,OCT,NOV,DEC};
int main(void){char s[20];if(scanf("%19s",s)!=1)return 1;const char*names[]={"JAN","FEB","MAR","APR","MAY","JUN","JUL","AUG","SEP","OCT","NOV","DEC"};int days[]={31,28,31,30,31,30,31,31,30,31,30,31};for(int i=0;i<12;i++)if(!strcmp(s,names[i])){if(i==1)puts("28 or 29 days");else printf("%d days\n",days[i]);return 0;}puts("Invalid month");return 0;}
