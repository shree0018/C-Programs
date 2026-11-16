/* Q142: Store details of 5 students in an array of structures and print all. */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

struct Student{char name[100];int roll;float marks;};int main(){struct Student s[5];for(int i=0;i<5;i++)scanf("%99s%d%f",s[i].name,&s[i].roll,&s[i].marks);for(int i=0;i<5;i++)printf("%s %d %.2f\n",s[i].name,s[i].roll,s[i].marks);return 0;}
