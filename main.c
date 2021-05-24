//C space adventure
//author: Carlos Gonzalez
#include <stdio.h>
#include <string.h>

#define MAX_LIMIT 50

void printWelcome();
char* responseFor();
void printGreeting();
void travelTo();
void travelGuide();
void travelToRandomPlanet();

int main(int argc, char *argv[]) {

    printWelcome();
    printGreeting(responseFor("What is your name?"));
    travelGuide();

    return 0;
}

void printWelcome() {
    printf("Welcome to the Solar System!\n");
    printf("There are 9 planets to explore.\n");
}

char* responseFor(char *astring) {
    static char response[MAX_LIMIT];
    printf("%s\n", astring);
    fgets(response, sizeof(response), stdin);
    response[strcspn(response, "\n")] = 0;
    return response;
}

void printGreeting(char *astring) {
    printf("Nice to meet you, %s. My name is Eliza, I'm an old friend of Alexa.\n", astring);
}

void travelTo(char *string) {
    printf("Traveling to %s...\n", string);
}

void travelToRandomPlanet() {
    printf("Traveling to Venus...\n");
}

void travelGuide() {
    char confirm[MAX_LIMIT];

    printf("Lets go on an adventure!\n");
    printf("Shall I randomly choose a planet for you to visit? (Y or N)\n");
    fgets(confirm, sizeof(confirm), stdin);
    confirm[strcspn(confirm, "\n")] = 0;

    while(strcmp(confirm, "Y") != 0 || strcmp(confirm, "N") != 0) {

        if(strcmp(confirm, "Y") == 0) {
            travelToRandomPlanet();
            break;
        } else if(strcmp(confirm, "N") == 0) {
            travelTo(responseFor("Name the planet you would like to visit."));
            break;
        } else {
            printf("Sorry, I didn't get that.\n");
            printf("Shall I randomly choose a planet for you to visit? (Y or N)\n");
            fgets(confirm, sizeof(confirm), stdin);
            confirm[strcspn(confirm, "\n")] = 0;
        }
    }
}