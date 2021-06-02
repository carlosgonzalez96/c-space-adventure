#include "headers.h"

void printWelcome() {
    printf("Welcome to the Solar System!\n");
    printf("There are 9 planets to explore.\n");
}

char* responseFor(char *aString) {
    static char response[MAX_LIMIT];
    printf("%s\n", aString);
    fgets(response, sizeof(response), stdin);
    response[strcspn(response, "\n")] = 0;
    return response;
}

void printGreeting(char *aString) {
    printf("Nice to meet you, %s. My name is Eliza, I'm an old friend of Alexa.\n", aString);
}