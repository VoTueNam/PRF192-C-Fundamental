// C program to demonstrate
// example of toupper() function.
#include <ctype.h>
#include <stdio.h>
 
int main()
{
    int j = 0;
    char str[] = "Geekforgeeks\n";
    char ch;
 
    while (str[j]) {
        ch = str[j];
        putchar(tolower(ch)); //Hoặc toupper()
        j++;
    }
 
    return 0;
}