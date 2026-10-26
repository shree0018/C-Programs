/* Q121: Create info.txt in write mode, take user name and age, write them using fprintf(), and confirm successful save. */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){char name[100];int age;fgets(name,sizeof name,stdin);name[strcspn(name,"\n")]=0;scanf("%d",&age);FILE*f=fopen("info.txt","w");if(!f)return 1;fprintf(f,"Name: %s\nAge: %d\n",name,age);fclose(f);printf("File created successfully! Data written to info.txt");return 0;}
