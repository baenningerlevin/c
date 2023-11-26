#include <stdio.h>
#include <string.h>

int main() {
    char num = 98;
    char character = 'a';
    char string[] = "Hello World"; 
    char word[20] = "Hello"; // 20 is the size of the array
    char arr[] = {'H', 'e', 'l', 'l', 'o', 0}; // 0 is the null character
    char word2[100];
    strcpy(word2, "Hello"); // word2 = "Hello"

    printf("%d\n", num);
    printf("%c\n", character);
    printf("%s\n", string);
    printf("%c\n", num);
    printf("%s\n", word);
    printf("%s\n", arr);
    printf("%s\n", word2);
}