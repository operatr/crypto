#include <string.h>
#include <assert.h>
#include "./base64/base64.h"

int main()
{
	const char test_str_1[] = "M";
	const char test_str_2[] = "Ma";
	const char test_str_3[] = "Man";
	const char test_str_4[] = "49276d206b696c6c696e6720796f757220627261696e206c696b65206120706f69736f6e6f7573206d757368726f6f6d";

	const size_t BUFFER_SIZE = 255;
	char result1[BUFFER_SIZE];
	hex_to_base64(test_str_1, result1, sizeof(result1));
	// assert(strcmp("TQ", result1) ==s 0);

	char result2[BUFFER_SIZE];
	hex_to_base64(test_str_2, result2, BUFFER_SIZE);
	// assert(strcmp("TWE", result2) == 0);

	//const char *result3 = hex_to_base64(test_str_3);
	// assert(strcmp("TWFu", result3) == 0);

	//const char *result4 = hex_to_base64(test_str_4);
	// assert(strcmp("SSdtIGtpbGxpbmcgeW91ciBicmFpbiBsaWtlIGEgcG9pc29ub3VzIG11c2hyb29t", result4) == 0);

	return 0;
}