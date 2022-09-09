#include <stdio.h>
int main(){ 
char str[20]="BENGALURU";  

for (int i=0; str[i]; i++){
    if (str[i]>='A' && str[i]<='Z')
    str[i]=str[i]+32;
    
}
printf ("String in lower case is : %s ",str );
return 0; 
}