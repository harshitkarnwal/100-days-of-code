// Retrospective completion date: 2026-11-01 (reconstructed)
// Q134: Use an enum for SUCCESS, FAILURE, and TIMEOUT and print a message.
#include <stdio.h>
#include <string.h>
enum Status{SUCCESS,FAILURE,TIMEOUT};
int main(void){char s[20];if(scanf("%19s",s)!=1)return 1;enum Status st;if(!strcmp(s,"SUCCESS"))st=SUCCESS;else if(!strcmp(s,"FAILURE"))st=FAILURE;else if(!strcmp(s,"TIMEOUT"))st=TIMEOUT;else{puts("Invalid status");return 0;}switch(st){case SUCCESS:puts("Operation successful");break;case FAILURE:puts("Operation failed");break;case TIMEOUT:puts("Operation timed out");break;}return 0;}
