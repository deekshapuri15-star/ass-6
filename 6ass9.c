#include<stdio.h>
#include<string.h>
 int main(){
 	char str1[50],str2[50];

printf("enter 1st string");
scanf("%s",str1);
printf("enter 2nd string");
scanf("%s",str2);

 strcpy(str1,str2);
 printf("the copied string is %s",str2);
return 0;
}

