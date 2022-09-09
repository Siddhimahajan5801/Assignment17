#include <stdio.h>
#include<string.h>

int main(){ 

char str1[20];
printf("Enter your string : ");
fgets(str1,20,stdin);
int n= strlen(str1);

char str2[20];

for (int i=0; i<n; i++){
str2[i]=str1[i];
}

printf("The copied string is : \n");
for (int i=0; i<n; i++)
printf("%c",str2[i]);

return 0; 
}