// Retrospective completion date: 2026-11-05 (reconstructed)
// Q138: Print enum names and values by iterating over the enum range.
#include <stdio.h>
enum Signal{RED,YELLOW,GREEN};
int main(void){const char*names[]={"RED","YELLOW","GREEN"};for(int i=RED;i<=GREEN;i++)printf("%s=%d\n",names[i],i);return 0;}
