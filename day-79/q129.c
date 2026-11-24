// Q129: Read integers from numbers.txt and print their sum and average.
#include <stdio.h>
int main(void){FILE*f=fopen("numbers.txt","r");if(!f){perror("numbers.txt");return 1;}long long sum=0;long count=0;int x;while(fscanf(f,"%d",&x)==1){sum+=x;count++;}if(ferror(f)){fclose(f);return 1;}fclose(f);if(count==0){puts("No numbers found");return 0;}printf("Sum = %lld\nAverage = %.2f\n",sum,(double)sum/count);return 0;}
