#include<stdio.h> 
#include <string.h>
main() 
{ 
    char verb[26]; 
    char aff[26]; 
    int L; 
   printf("\nVerbe : "); 
    scanf("%s",verb); 
// controle 
    L = strlen(verb); 
    if ((verb[L-2]!='e') || (verb[L-1]!='r'))printf("\nCe n'est pas un verbe du premier groupe.!"); 
    
	else { // Couper la terminaison 'er'
            verb[L-2]='\0'; 
        //  
            aff[0]='\0'; 
            strcat(aff, "je "); 
            strcat(aff, verb); 
            strcat(aff, "e"); 
           printf(aff);
           printf("\n");
           
           aff[0]='\0'; 
            strcat(aff, "tu "); 
            strcat(aff, verb); 
            strcat(aff, "es"); 
           printf(aff); 
                      printf("\n");
            
			aff[0]='\0'; 
            strcat(aff, "il "); 
            strcat(aff, verb); 
            strcat(aff, "e"); 
           printf(aff); 
                      printf("\n");

            aff[0]='\0'; 
            strcat(aff, "nous "); 
            strcat(aff, verb); 
            strcat(aff, "ons"); 
           printf(aff); 
                      printf("\n");
                      
                      aff[0]='\0'; 
            strcat(aff, "vous "); 
            strcat(aff, verb); 
            strcat(aff, "ez"); 
           printf(aff); 
                      printf("\n");
                      
            aff[0]='\0'; 
            strcat(aff, "ils "); 
            strcat(aff, verb); 
            strcat(aff, "ent"); 
           printf(aff); 
                      printf("\n");

            } 
return 0;
} 
