#include <stdio.h>

int main() {

    //Initialisation des variables
    char mot[8] = {'b', 'o', 'n', 'j', 'o', 'u', 'r', '\0'};

    for (int i = 0; i < 7; i++){
        printf("%c", mot[i]);
    }
    

    return 0;
}