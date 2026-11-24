// Q143: Find the student with the highest marks using an array of structures.
#include <stdio.h>
struct Student{char name[100];int roll;float marks;};
int main(void){int n;if(scanf("%d",&n)!=1||n<1)return 1;struct Student best,s;for(int i=0;i<n;i++){if(scanf("%99s %d %f",s.name,&s.roll,&s.marks)!=3)return 1;if(i==0||s.marks>best.marks)best=s;}printf("Topper: %s (Marks: %.0f)\n",best.name,best.marks);return 0;}
