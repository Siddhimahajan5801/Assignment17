#include <stdio.h>
int main(){ 
char str[20]="Bengaluru";  

// Finding occurance of vowels in the given string
int count=0;

for (int i=0; str[i]; i++){
    if (str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u' )
    count++;
}
printf("There are %d vowels in the given string %s ", count ,str);
return 0; 
}