/* Q145: Return a structure containing top student's details from a function. */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

struct Student{char name[100];int roll;float marks;};struct Student top(struct Student s[],int n){int b=0;for(int i=1;i<n;i++)if(s[i].marks>s[b].marks)b=i;return s[b];}int main(){int n;scanf("%d",&n);struct Student s[100];for(int i=0;i<n;i++)scanf("%99s%d%f",s[i].name,&s[i].roll,&s[i].marks);struct Student t=top(s,n);printf("Top Student: %s | Roll: %d | Marks: %.0f",t.name,t.roll,t.marks);return 0;}
