/* Q141: Define a structure Student with name, roll_no, and marks, then read and print one student's data. */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

struct Student{char name[100];int roll_no;float marks;};int main(){struct Student s;scanf("%99s%d%f",s.name,&s.roll_no,&s.marks);printf("Name: %s | Roll: %d | Marks: %.0f",s.name,s.roll_no,s.marks);return 0;}
