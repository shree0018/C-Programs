/* Q139: Show that enums store integers by printing assigned values. */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

enum Status{SUCCESS,FAILURE,TIMEOUT};int main(){printf("SUCCESS=%d, FAILURE=%d, TIMEOUT=%d",SUCCESS,FAILURE,TIMEOUT);return 0;}
