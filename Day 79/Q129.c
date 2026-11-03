/* Q129: Read integers from numbers.txt, compute their sum and average, and print both. */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){FILE*f=fopen("numbers.txt","r");if(!f)return 1;int x,n=0;long long s=0;while(fscanf(f,"%d",&x)==1){s+=x;n++;}fclose(f);printf("Sum = %lld\nAverage = %.2f",s,n?(double)s/n:0);return 0;}
