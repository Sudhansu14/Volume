#include <stdio.h>

enum weekdays
{Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};

main()
{
   enum weekdays w;
   w=Monday; 
   printf("The value of w is %d",w);
}

