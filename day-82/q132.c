// Q132: Map a traffic-light enum value to its instruction.
#include <stdio.h>
#include <string.h>
enum Traffic{RED,YELLOW,GREEN};
int main(void){char s[20];if(scanf("%19s",s)!=1)return 1;enum Traffic t;if(!strcmp(s,"RED"))t=RED;else if(!strcmp(s,"YELLOW"))t=YELLOW;else if(!strcmp(s,"GREEN"))t=GREEN;else{puts("Invalid signal");return 0;}switch(t){case RED:puts("Stop");break;case YELLOW:puts("Wait");break;case GREEN:puts("Go");break;}return 0;}
