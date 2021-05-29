//C space adventure
//author: Carlos Gonzalez
#include "planets.h"

int main(int argc, char *argv[]) {

    printWelcome();
    printGreeting(responseFor("What is your name?"));
    travelGuide();

    return 0;
}
