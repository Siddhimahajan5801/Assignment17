#include <stdio.h>
int main(){ 
char str[20]="Bengaluru";  

for (int i=0; str[i]; i++){
    if (str[i]>='a' && str[i]<='z')
    str[i]=str[i]-32;
    
}
printf ("String in upper case is : %s ",str );
return 0; 
}