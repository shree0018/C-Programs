/* Q131: Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value. */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

enum Day{SUNDAY,MONDAY,TUESDAY,WEDNESDAY,THURSDAY,FRIDAY,SATURDAY};int main(){char*n[]={"SUNDAY","MONDAY","TUESDAY","WEDNESDAY","THURSDAY","FRIDAY","SATURDAY"};for(int i=SUNDAY;i<=SATURDAY;i++)printf("%s = %d\n",n[i],i);return 0;}
