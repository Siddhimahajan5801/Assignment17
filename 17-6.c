#include <stdio.h>
int main(){ 
    char str[10]= "banglore";
    int i;
    char temp;

        for (i=0; i<4; i++){

            temp=str[i];
            str[i]=str[7-i];
            str[7-i]=temp;
        }
    

    printf("%s",str);
    
return 0; 
}