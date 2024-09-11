/*
 * Here we gonna have some functions created that will help us deal with our functions
 * How we gonna do this? Let's staaart the game
 */

// First function it's to return the maximum length of a string
// Name > return_max_size()
// return type: int
// input pointer to char

// Should I dinamicaly allocate this string? Let's don't to this for the first time

#include <stddef.h>
#include "../header/stringL.h"

size_t return_max_size(const char* string) {
    int max_size = 0;
    if(string == NULL) return 0; // check if it's null
    const char* ptrToString = string;
    while(*ptrToString != '\0') ptrToString++;
    return ptrToString - string;
}