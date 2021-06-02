#include "headers.h"
#include "cJSON.h"

//refrence: https://spacesciencesoftware.wordpress.com/2013/09/10/a-good-way-to-read-json-with-c/
//refrence: https://stackoverflow.com/questions/174531/how-to-read-the-content-of-a-file-to-a-string-in-c

void travelToRandomPlanet(char* file) {
    char *planet_names[MAX_LIMIT];
    char *planet_descriptions[MAX_LIMIT];
 
    FILE *fp = fopen(file, "rb");
    
    fseek(fp, 0L, SEEK_END);
    long size = ftell(fp);
    fseek(fp, 0L, SEEK_SET);
    char *rJSON = (char*)calloc(size, sizeof(char));
    fread(rJSON, sizeof(char), size, fp);
    fclose(fp);

    const cJSON *planets = NULL;
    const cJSON *planet = NULL;
    
    cJSON *planets_json = cJSON_Parse(rJSON);

    planets = cJSON_GetObjectItem(planets_json, "planets");

    int i;
    int planet_count = cJSON_GetArraySize(planets);
    
    for(i = 0; i < planet_count; i++) {
        cJSON *planet = cJSON_GetArrayItem(planets, i);
        cJSON *planet_name = cJSON_GetObjectItem(planet, "name");
        cJSON *planet_desc = cJSON_GetObjectItem(planet, "description");
        planet_names[i] = planet_name->valuestring;
        planet_descriptions[i] = planet_desc->valuestring;
    }

    srand(time(NULL));
    int ranandomPlanet = rand() % 9;

    printf("Traveling to...%s\n", planet_names[ranandomPlanet]);
    printf("Arrived at %s. %s\n", planet_names[ranandomPlanet], planet_descriptions[ranandomPlanet]);

}