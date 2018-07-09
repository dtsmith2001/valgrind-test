#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct test_s {
    char *first;
    char *second;
    int type;
};

int main(int argc, char *argv[]) {
    char* string = (char *)malloc(5 * sizeof(char));
    fprintf(stderr, "String is '%s'\n", string);
//    struct test_s ta[10];
//    char *msg = (char *)malloc(10001*sizeof(char));
//    for (size_t i = 0; i < 10; i++) {
//	ta[i].first = (char *)"A";
	//char message[1000];
//	sprintf(msg, (char *)"A big long test string for i = %lu\n", i);
//	ta[i].second = msg;
//	ta[i].type = 1;
//    }
    return 0;
}

