/* Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role. */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

enum Role{ADMIN,USER,GUEST};int main(){char s[20];scanf("%19s",s);if(!strcmp(s,"ADMIN"))printf("Welcome Admin!");else if(!strcmp(s,"USER"))printf("Welcome User!");else printf("Welcome Guest!");return 0;}
