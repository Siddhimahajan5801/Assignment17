#include <stdio.h>
int main(){ 

 char str[20];
 printf("Enter your string : ");
 fgets(str,20,stdin);  

 int i, alpha=0, digit=0, spl_c=0;

 for(i=0; str[i]; i++ ){
    if( (str[i]>='a'&& str[i]<='z') || (str[i]>='A'&& str[i]<='Z'))
    alpha++;

    else if (str[i]>='0'&& str[i]<='9')
    digit++;

    else if (str[i]!='\0')
     spl_c++;
 }
    printf("The total numbers of alphabets, digits and special characters is : %d",alpha+digit+spl_c);

return 0; 
}