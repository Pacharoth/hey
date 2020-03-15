#include<stdio.h>
int main() {
    char letter;
    printf("Enter character (letter) :");
    scanf("%c",&letter);

    if(letter=='A'||letter=='a'||letter=='e'||letter=='E'||letter=='I'||letter=='i'||letter=='o'||letter=='O'||letter=='u'||letter=='U'){
        printf("Character of %c is vowel",letter);

    }
    else if(letter>='A'&&letter<='Z'||letter>='a'&&letter<='z')
    {
        printf("Character %c is consonant",letter);
    }
    else{
        printf("not available if not letter");
    }
    return 0;
}