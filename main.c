//C space adventure
//author: Carlos Gonzalez
#include "headers.h"

int main(int argc, char *argv[]) { 

    char* file_input = argv[1];

    printWelcome();
    printGreeting(responseFor("What is your name?"));
    travelGuide(file_input);

    return 0;
}

