#include <stdio.h>
#include <string.h>
int main () {
printf ("Answer the question for captcha security check\n");
printf ("What's the number beetween 1000 and 20000 ?\n");
int captcha  ;
scanf ("%d", &captcha);
if (captcha != 1500){
printf ("Error, arresting program\n");
return 0 ;
}  
else {
printf ("Captcha solved\n");
}
return 0 ; 
}
