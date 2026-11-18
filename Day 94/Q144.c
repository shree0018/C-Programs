/* Q144: Write a function that accepts a structure as parameter and prints its members. */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

struct Student{char name[100];int roll;float marks;};void printStudent(struct Student s){printf("Name: %s | Roll: %d | Marks: %.0f",s.name,s.roll,s.marks);}int main(){struct Student s;scanf("%99s%d%f",s.name,&s.roll,&s.marks);printStudent(s);return 0;}
