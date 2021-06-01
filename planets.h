#ifndef PLANETS_H

#define PLANETS_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <errno.h>

#define MAX_LIMIT 200

void printWelcome();
char* responseFor();
void printGreeting();
void travelTo();
void travelGuide();
void travelToRandomPlanet();
#endif