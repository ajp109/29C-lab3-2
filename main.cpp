#include "mbed.h"

int main() {

    char string[] = {'m','e','s','s','a','g','e',0};

    printf("%s\n", string);

    while (true) {
        sleep();
    }
}
