#ifndef ARITHMETIC
#define ARITHMETIC

#include <stdio.h>
#include <string>
#include <iostream>

/// Encrypts the sentence into an array of numbers using cryptarithmetic
/// Returns encryption pass/fail status
bool encrypt(std::string* words, int amount);

#endif