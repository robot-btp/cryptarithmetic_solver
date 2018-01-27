#include "parser.h"
#include "arithmetic.h"

int main(int argc, char **argv)
{
	std::string word_array = "";
	std::string* words = &word_array;
	int amount = 0;
	bool result = false;
	// Parse sentence
	amount = handle_sentence(words);
	// Do arithmetic
	if (encrypt(words, amount)) { return 0; }
	else { return -1; }
}