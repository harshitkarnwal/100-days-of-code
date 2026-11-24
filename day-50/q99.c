// Q99: Change a date from dd/mm/yyyy to dd-Mmm-yyyy.
#include <stdio.h>
int main(void){int d,m,y;const char *month[]={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
if(scanf("%d/%d/%d",&d,&m,&y)!=3)return 1;if(m<1||m>12){printf("Invalid month\n");return 0;}printf("%02d-%s-%04d\n",d,month[m-1],y);return 0;}