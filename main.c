#include <stdio.h>

int main()
{
	fprintf(stdout, "This is to stdout. ");
	fprintf(stderr, "This is to stderr. ");
	fprintf(stdout, "This is also to stdout. ");
}