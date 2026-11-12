// Retrospective completion date: 2026-11-12 (reconstructed)
// Q145: Return the highest-scoring student structure from a function.
#include <stdio.h>
#include <stdlib.h>
struct Student{char name[100];int roll;float marks;};
struct Student topper(struct Student a[],int n){struct Student best=a[0];for(int i=1;i<n;i++)if(a[i].marks>best.marks)best=a[i];return best;}
int main(void){int n;if(scanf("%d",&n)!=1||n<1)return 1;struct Student*a=malloc((size_t)n*sizeof *a);if(!a)return 1;for(int i=0;i<n;i++)if(scanf("%99s %d %f",a[i].name,&a[i].roll,&a[i].marks)!=3){free(a);return 1;}struct Student b=topper(a,n);printf("Top Student: %s | Roll: %d | Marks: %.0f\n",b.name,b.roll,b.marks);free(a);return 0;}
