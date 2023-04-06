#include <stdio.h>

void printStringReverseRecursively(const char* str) {
    if (*str == '\0') {
        return;  // Base case: if the string is empty, return
    } else {
        printStringReverseRecursively(str + 1);  // Recursively call the function with the next character
        putchar(*str);  // Print the current character after the recursive call
    }
    printf("\n");
}

int main() {
    const char* myString = "Hello, world!";
    printStringReverseRecursively(myString);
    return 0;

}
