/*
 * Here we gonna have some functions created that will help us deal with our functions
 * How we gonna do this? Let's staaart the game
 */

// First function it's to return the maximum length of a string
// Name > return_max_size()
// return type: int
// input pointer to char

// Should I dinamicaly allocate this string? Let's don't to this for the first time

#include "../header/stringL.h"
#include <stdio.h>

char* strttok(char* string, char* delimiter) {
    static char* last_token = NULL;
    char* token_start;

    if (string == NULL) string = last_token;
    if (string == NULL) return NULL;

    token_start = string;

    while(*string) {

        if( *string == *delimiter ) {
            *string = '\0';
            last_token = string + 1;
            return token_start;
        }

        string++;

    }

    last_token = NULL;
    return token_start;
}

size_t return_max_size(const char* string) {
    int max_size = 0;
    if(string == NULL) return 0; // check if it's null
    const char* ptrToString = string;
    while(*ptrToString != '\0') ptrToString++;
    return ptrToString - string;
}

char* strcat(const char* string_source, char* string_destination) {
    if(!string_source || !string_destination) return NULL;

    char* pointer = string_destination;

    while(*pointer) pointer++;


    while(*string_source != '\0') {
        *pointer = *string_source;
        pointer++;
        string_source++;
    }

    *pointer = '\0';

    return string_destination;
}

const char * strhat ( const char * string, int character ) {
    if (!string) return NULL;
    while(*string) {
        if(*string == character) {
            return string;
        }

        string++;

    }
    return NULL;
}