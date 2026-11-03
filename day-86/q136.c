// Retrospective completion date: 2026-11-03 (reconstructed)
// Q136: Use an enum menu choice and switch to perform arithmetic.
#include <stdio.h>
#include <string.h>
enum Operation{ADD,SUBTRACT,MULTIPLY};
int main(void){char op[20];long long a,b;if(scanf("%19s %lld %lld",op,&a,&b)!=3)return 1;enum Operation choice;if(!strcmp(op,"ADD"))choice=ADD;else if(!strcmp(op,"SUBTRACT"))choice=SUBTRACT;else if(!strcmp(op,"MULTIPLY"))choice=MULTIPLY;else{puts("Invalid operation");return 0;}switch(choice){case ADD:printf("%lld\n",a+b);break;case SUBTRACT:printf("%lld\n",a-b);break;case MULTIPLY:printf("%lld\n",a*b);break;}return 0;}
