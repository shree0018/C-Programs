/* Q138: Print all enum names and integer values using a loop. */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

enum Light{RED,YELLOW,GREEN};int main(){char*n[]={"RED","YELLOW","GREEN"};for(int i=RED;i<=GREEN;i++)printf("%s=%d\n",n[i],i);return 0;}
