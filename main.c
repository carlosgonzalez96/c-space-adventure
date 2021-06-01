//C space adventure
//author: Carlos Gonzalez
#include "planets.h"

int main(int argc, char *argv[]) { 

    char* file_input = argv[1];
    // char lines[300];
    // char* p;

    // FILE *fileData = fopen(argv[1], "r");

    // if(fileData == NULL) {
    //     fprintf(stderr, "Could not open File %s", strerror(errno));
    //     exit(EXIT_FAILURE);
    // }

    // while(fgets(lines, sizeof(lines), fileData) != NULL) {
    //     p = strtok(lines, "{}[],:\"");
    //     while(p != NULL) {
    //         printf("%s", p);
    //         p = strtok(NULL, "{}[],:\"");
    //     }
    // }

    printWelcome();
    printGreeting(responseFor("What is your name?"));
    travelGuide(file_input);

    return 0;
}

