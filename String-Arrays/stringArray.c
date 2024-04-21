#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
    // allocate space for 5 pointers to strings
    char **strings = (char**)malloc(5*sizeof(char*));
    int i = 0;
    //allocate space for each string
    // here allocate 50 bytes, which is more than enough for the strings
    for(i = 0; i < 5; i++){
        printf("%d\n", i);
        strings[i] = (char*)malloc(50*sizeof(char));
    }
    //assign them all something
    sprintf(strings[0], "bird goes tweet");
    sprintf(strings[1], "mouse goes squeak");
    sprintf(strings[2], "cow goes moo");
    sprintf(strings[3], "frog goes croak");
    sprintf(strings[4], "what does the fox say?");
    // Print it out
    for(i = 0; i < 5; i++){
        printf("Line #%d(length: %lu): %s\n", i, strlen(strings[i]),strings[i]);
    } 
    //Free each string
    for(i = 0; i < 5; i++){
        free(strings[i]);
    }
    //finally release the first string
    free(strings);
    return 0;
}
