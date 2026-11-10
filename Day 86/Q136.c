/* Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch. */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

enum Choice{ADD,SUBTRACT,MULTIPLY};int main(){char op[20];int a,b;scanf("%19s%d%d",op,&a,&b);enum Choice c=!strcmp(op,"ADD")?ADD:!strcmp(op,"SUBTRACT")?SUBTRACT:MULTIPLY;switch(c){case ADD:printf("%d",a+b);break;case SUBTRACT:printf("%d",a-b);break;case MULTIPLY:printf("%d",a*b);}return 0;}
