#include "planets.h"

void travelGuide(char* file) {
    char confirm[MAX_LIMIT];

    printf("Lets go on an adventure!\n");
    printf("Shall I randomly choose a planet for you to visit? (Y or N)\n");
    fgets(confirm, sizeof(confirm), stdin);
    confirm[strcspn(confirm, "\n")] = 0;

    while(strcmp(confirm, "Y") != 0 || strcmp(confirm, "N") != 0) {

        if(strcmp(confirm, "Y") == 0) {
            travelToRandomPlanet(file);
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