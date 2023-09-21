#include <stdio.h>

void printMessage() {
    printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}

int main() {
    // Call the function to print the message before main
    printMessage();

    // Your main program logic here
    printf("Main function executed.\n");
    return 0;
}
