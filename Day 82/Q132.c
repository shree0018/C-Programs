/* Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value. */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

enum Light{RED,YELLOW,GREEN};int main(){char s[20];scanf("%19s",s);enum Light x=!strcmp(s,"RED")?RED:!strcmp(s,"YELLOW")?YELLOW:GREEN;printf(x==RED?"Stop":x==YELLOW?"Wait":"Go");return 0;}
