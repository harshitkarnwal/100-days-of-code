// Q119: Find the one repeated integer in a single pass using a hash set.
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
static uint32_t hashint(int x){uint32_t z=(uint32_t)x;z^=z>>16;z*=0x7feb352dU;z^=z>>15;z*=0x846ca68bU;z^=z>>16;return z;}
int main(void){int n,*keys;unsigned char *used;if(scanf("%d",&n)!=1||n<0)return 1;size_t cap=8;while(cap<(size_t)n*2)cap*=2;keys=malloc(cap*sizeof *keys);used=calloc(cap,1);if(!keys||!used){free(keys);free(used);return 1;}for(int i=0;i<n;i++){int x;if(scanf("%d",&x)!=1){free(keys);free(used);return 1;}size_t j=hashint(x)&(cap-1);while(used[j]&&keys[j]!=x)j=(j+1)&(cap-1);if(used[j]){printf("%d\n",x);free(keys);free(used);return 0;}used[j]=1;keys[j]=x;}puts("-1");free(keys);free(used);return 0;}
