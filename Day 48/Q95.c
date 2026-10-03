/* Q95: Check if one string is a rotation of another. */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){char a[300],b[300],t[600];scanf("%299s%299s",a,b);if(strlen(a)!=strlen(b)){printf("Not rotation");return 0;}strcpy(t,a);strcat(t,a);printf(strstr(t,b)?"Rotation":"Not rotation");return 0;}
