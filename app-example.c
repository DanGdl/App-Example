#include <stdio.h>
#include "app-example.h"

int main(int argc, char* argv[]) {
    printf("Hello from example app\n");

#ifdef FLAG_PATCH
    printf("Patch flag defined\n");
else
    printf("Patch flag not defined\n");
#endif
    return 0;
}
