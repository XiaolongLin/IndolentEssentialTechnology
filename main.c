
#include <stdio.h>
#include<readline/readline.h>
#include <stdlib.h>
int main(void) {
  double grade = atof(readline("Enter your CMPSC 131 grade: "));
  
  
  if  (grade>=93) {
     printf("Your letter grade for CMPSC 131 is A.\n");
  }
  else if (grade>=90) {
     printf("Your letter grade for CMPSC 131 is A-.\n");
  }
  else if (grade>=87) {
    printf("Your letter grade for CMPSC 131 is B+.\n");
  }
  else if (grade>=83) {
    printf("Your letter grade for CMPSC 131 is B.\n");
  }
  else if (grade>=80) {
    printf("Your letter grade for CMPSC 131 is B-.\n");
  }
  else if (grade>=77) {
    printf("Your letter grade for CMPSC 131 is C+.\n");
  }
  else if (grade>=70) {
    printf("Your letter grade for CMPSC 131 is C.\n");
  }
  else if (grade>=60) {
    printf("Your letter grade for CMPSC 131 is D.\n");
  }  
  else   {
    printf("Your letter grade for CMPSC 131 is F.\n");
  }  
    
  
    

  
  
  

  
  return 0;
}