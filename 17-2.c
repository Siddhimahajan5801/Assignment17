#include <stdio.h>
int main(){ 
char str[20]="Bengaluru";  

// Finding occurance of 'u' in the given string
int count=0;

for (int i=0; str[i]; i++){
    if (str[i]=='u')
    count++;
}
printf("Occurance of 'u' in the given string %s is : %d ",str, count );
return 0; 
}