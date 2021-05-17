//C space adventure
//author: Carlos Gonzalez
#include <stdio.h>
#include <string.h>

#define MAX_LIMIT 50

void printGreeting();

int main(int argc, char *argv[]) {

    char name[MAX_LIMIT];
    char confirm[MAX_LIMIT];

    printGreeting();
    printf("What is your name?\n");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0;
    printf("Nice to meet you, %s. My name is Eliza, I'm an old friend of Alexa.\nLets go on an adventure!\n", name);
    printf("Shall I randomly choose a planet for you to visit? (Y or N)\n");
    fgets(confirm, sizeof(confirm), stdin);
    confirm[strcspn(confirm, "\n")] = 0;

    while(strcmp(confirm, "Y") != 0 || strcmp(confirm, "N") != 0) {
        
        if(strcmp(confirm, "Y") == 0) {
            printf("You chose: %s\n", confirm);
            break;
        } else if(strcmp(confirm, "N") == 0) {
            printf("You chose: %s\n", confirm);
            break;
        } else {
            printf("Sorry, I didn't get that.\n");
            printf("Shall I randomly choose a planet for you to visit? (Y or N)\n");
            fgets(confirm, sizeof(confirm), stdin);
            confirm[strcspn(confirm, "\n")] = 0;
        }
    }

    return 0;
}

void printGreeting() {
    printf("Welcome to the Solar System!\n");
    printf("There are 9 planets to explore.\n");
}
