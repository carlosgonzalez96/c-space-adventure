//C space adventure
//author: Carlos Gonzalez
#include <stdio.h>
int main(int argc, char *argv[]) {

    char name[20];

    printf("Welcom to the Solar System!\nThere are 9 planets to explore.\nWhat is your name?\n");
    scanf("%19[^\n]", name);
    printf("Nice to meet you, %s. My name is Eliza, I'm an old friend of Alexa.\nLets go on an adventure!\n", name);

    return 0;
}
