#include <stdio.h>
#include <string.h>

void indian(){
    printf("indian \n");
}
void nonindian(){
    printf("foreigners \n");
}


int main()
{
    int token = 5;
    char countary[20];
 do{
     printf("Enter Your country name :");
     scanf(" %s", &countary);
     
     if(strcmp(countary, "india")== 0 || strcmp(countary, "India") == 0){
         indian();
     }else {
         nonindian();
     }
 }while(token>=0);
 
 
    return 0;
}