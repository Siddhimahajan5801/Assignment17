#include <stdio.h>
int main(){ 

      char str[20];
      printf("Enter your string under 20 charaters: ");
      fgets(str,20,stdin);
      int i;

      for(i=0; str[i]; i++){}
      printf("Length of the string is : %d", i-1);   // 1 iteration is for --> for null character


return 0; 
}