#include <stdio.h>
int main(){ 
    char str[20],ch;
    printf("Enter your string :");
    fgets(str,20,stdin);

    printf("Enter the character whose frequency is to be determined : ");
    scanf("%c",&ch);

    int count=0;
    for (int i=0; str[i]; i++){
        if (str[i]==ch)
        count++;
    }
       printf("The frequency of character %c in the given string is : %d ", ch, count);

return 0; 
}