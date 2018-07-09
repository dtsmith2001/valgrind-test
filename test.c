#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define ARR_SIZE 10

struct test_s {
    char *first;
    char *second;
    int type;
};

int main(int argc, char *argv[]) {
    struct test_s my_test[ARR_SIZE];
    char *msg = (char *)malloc(10001*sizeof(char));
    my_test[0].first = (char *)"A String";
    my_test[0].second = (char *)"Second string";
    my_test[0].type = 0;
    for (size_t i = 1; i < ARR_SIZE; i++) {
	my_test[i].first = (char *)"A";
	sprintf(msg, (char *)"A big long test string for i = %lu\n", i);
	my_test[i].second = msg;
	my_test[i].type = 1;
	fprintf(stderr, "%s\n", my_test[i].first);
    }
    return 0;
}

