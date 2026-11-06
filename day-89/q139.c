// Retrospective completion date: 2026-11-06 (reconstructed)
// Q139: Demonstrate that enum constants have integer values.
#include <stdio.h>
enum Result{SUCCESS,FAILURE,TIMEOUT};
int main(void){printf("SUCCESS=%d, FAILURE=%d, TIMEOUT=%d\n",SUCCESS,FAILURE,TIMEOUT);return 0;}
