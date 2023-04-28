/* Write a C program to print the string after the first occurence of the space using pointer.
Name - Sachin Negi
Roll no - 54
Section - E1
Course - BTech
Branch - CSE
*/

#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    gets(str);
    char *ptr = str;
    char str1[100];
    char *ptr1 = str1;
    int b = strlen(str);
    int i=0;
    while(*ptr!=' '){
        i++;
        ptr++;
    }
    ptr++;
    for(int j=i; j<b; j++){
        *ptr1 = *ptr;
        ptr1++;
        ptr++;
    }
    printf("%s",str1);
    return 0;
}

Output:  
Enter the string : Make hay while the sun shines
Output : hay while the sun shines