// Retrospective completion date: 2026-10-02 (reconstructed)
// Q104: Find x such that 1+...+x equals x+...+n; print -1 if absent.
#include <stdio.h>
int main(void){long long n;if(scanf("%lld",&n)!=1||n<1)return 1;long long total=n*(n+1)/2,l=1,r=n;while(l<=r){long long m=l+(r-l)/2,v=m*m;if(v==total){printf("%lld\n",m);return 0;}if(v<total)l=m+1;else r=m-1;}puts("-1");return 0;}
