#include <stdio.h>
#include<string.h>

int main(){ 
    char str[20],temp;
    printf("Enter your string :");
    fgets(str,20,stdin);
    int n=strlen(str);

    temp=str[0];

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if (str[i]>str[j]){

                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
    
          printf("The string in ascending order is : %s", str);

return 0; 
}