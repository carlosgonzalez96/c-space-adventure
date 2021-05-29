#include "planets.h"

void travelToRandomPlanet() {

    const char* planets[9] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune", "Pluto"};
    
    srand(time(0));
    int nandomPlanet = rand() % 10 + 1;

    printf("Traveling to %s...\n", planets[nandomPlanet]);
}