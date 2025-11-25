#include<stdio.h>
#include<string.h>
 int main(){
 	char str1[50],str2[50];
 	int i=0;

printf("enter 1st string");
scanf("%s",str1);
printf("enter 2nd string");
scanf("%s",str2);

 while(str1[i] !='\0'){
 	str1[i]=str2[i];
 	i++;
 }
    str2[i]='\0';
 printf("the copied string is %s",str2);
return 0;
}

