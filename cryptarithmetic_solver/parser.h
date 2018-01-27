#ifndef PARSER
#define PARSER

#include <stdio.h>
#include <string>
#include <iostream>

/// Stores separate words as a string array to the address passed as an argument
/// NOTE: The largest word should always be first in the array
/// Returns the amount of words in the user's sentence
int handle_sentence(std::string* words);

/// Stores user's sentence into a string variable passed as an argument
/// Returns a boolean representing the validity of the input
bool read_input(std::string* sentence);

#endif