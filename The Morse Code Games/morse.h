#ifndef __STM32L476G_MORSE_H
#define __STM32L476G_MORSE_H

#include "stm321476xx.h"
#include <stddef.h> // size_t
#include <stdlib.h> // randomizer
#include <string.h> // strlen 
#include <time.h>

// morse table for all letters in alphabet
extern const char* morse_table[];

// init for piezo buzz interrupts
void morse_buzz_init(void);

// using rand, generates a randomo string dependent on given length
char* random_string_generator(size_t len);

// translate a string into dot and dashes buzzed by piezo
void morse_code_piezo(char* string);


#endif