/* Q140: Define a struct with enum Gender and print person's gender. */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

enum Gender{MALE,FEMALE,OTHER};struct Person{char name[100];enum Gender gender;};int main(){struct Person p;char g[20];scanf("%99s%19s",p.name,g);p.gender=!strcmp(g,"MALE")?MALE:!strcmp(g,"FEMALE")?FEMALE:OTHER;printf(p.gender==MALE?"Male":p.gender==FEMALE?"Female":"Other");return 0;}
