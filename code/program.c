//
// file: program.c
// author: Michael Brockus
// gmail: <michaelbrockus@gmail.com>
//
#include "program.h"
#include <stdio.h>
#include <stdlib.h>

//
// Greet the user
//
const char * greet(void)
{
    return "Hello, C Developer.";
} // end of functions greet

//
// foundation of the program and related
// application logic must be implemented
// in the foundation.
//
int foundation(void)
{
    puts(greet());
    return EXIT_SUCCESS;
} // end of function foundation
