/* Q90: Toggle case of each character in a string. */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){char s[500];fgets(s,sizeof s,stdin);for(int i=0;s[i];i++){if(islower((unsigned char)s[i]))s[i]=toupper(s[i]);else if(isupper((unsigned char)s[i]))s[i]=tolower(s[i]);}printf("%s",s);return 0;}
