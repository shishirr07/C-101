//
//  SwitchCaseDefault.c
//  CodeExamples
//
//  Created by Vedavith Ravula on 13/03/23.
//

#include <stdio.h>

int switchExample(void);
int switchExample ()
{
   /* local variable definition */
   char grade = 'B';

   switch(grade) {
      case 'A' :
         printf("Excellent!\n" );
         break;
      case 'B' :
      case 'C' :
         printf("Well done\n" );
         break;
      case 'D' :
         printf("You passed\n" );
         break;
      case 'F' :
         printf("Better try again\n" );
         break;
      default :
         printf("Invalid grade\n" );
   }
   
   printf("Your grade is  %c\n", grade );
 
   return 0;
}
