#pragma once

/*********************************** DEFINES **********************************/
#include <stddef.h>
#define NULL ((void *)0)

/*********************************** DEFINES **********************************/

/*********************************** FUNCTIONS **********************************/

size_t return_max_size(const char* stringToCalculate);
char* strttok(char* string, char* delimiter);
char* strcat (const char* string_source, char* string_destination);
const char * strhat ( const char * string, int character );

/*********************************** FUNCTIONS **********************************/