#include <stdio.h>
int main() {
    char chr;
    printf("Enter a character: ");
    scanf("%c",&chr);
    if (chr>='A'&&chr<='Z')
    {
        /* code */
        printf("That %c character is an uppercase letter.",chr);
    }
    else if (chr>='a'&&chr<='z')
    {
        printf("The %c character is an lowercase letter.",chr);
    }
    else if (chr>=48&&chr<=57)
    {
        printf("The %c character is a number",chr);
    }else
    {
        printf("That is not a number nor a letter.");
    }
    
    

    return 0;
}