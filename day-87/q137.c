// Retrospective completion date: 2026-11-04 (reconstructed)
// Q137: Use an enum to display a message for ADMIN, USER, or GUEST.
#include <stdio.h>
#include <string.h>
enum Role{ADMIN,USER,GUEST};
int main(void){char s[20];if(scanf("%19s",s)!=1)return 1;enum Role r;if(!strcmp(s,"ADMIN"))r=ADMIN;else if(!strcmp(s,"USER"))r=USER;else if(!strcmp(s,"GUEST"))r=GUEST;else{puts("Invalid role");return 0;}switch(r){case ADMIN:puts("Welcome Admin!");break;case USER:puts("Welcome User!");break;case GUEST:puts("Welcome Guest!");break;}return 0;}
