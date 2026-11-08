/* Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly. */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

enum Status{SUCCESS,FAILURE,TIMEOUT};int main(){char s[20];scanf("%19s",s);if(!strcmp(s,"SUCCESS"))printf("Operation successful");else if(!strcmp(s,"FAILURE"))printf("Operation failed");else printf("Operation timed out");return 0;}
