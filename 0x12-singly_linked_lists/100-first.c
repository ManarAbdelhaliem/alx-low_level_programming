#include <stdio.h>

void myConstructor(void) __attribute__((constructor));

void myConstructor(void) {
    printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}

int main() {
    // Your main program logic here
    printf("Main function executed.\n");
    return 0;
}
