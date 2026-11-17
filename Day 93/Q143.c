/* Q143: Find and print the student with the highest marks. */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

struct Student{char name[100];int roll;float marks;};int main(){int n;scanf("%d",&n);struct Student s[100];int best=0;for(int i=0;i<n;i++){scanf("%99s%d%f",s[i].name,&s[i].roll,&s[i].marks);if(i==0||s[i].marks>s[best].marks)best=i;}printf("Topper: %s (Marks: %.0f)",s[best].name,s[best].marks);return 0;}
