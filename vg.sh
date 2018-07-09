#!/usr/bin/env bash

g++ test.c -Wall -Werror -std=c++11 -O0 -ggdb3 -o bin/test

valgrind --verbose --tool=memcheck \
    --leak-check=full --time-stamp=yes \
    --show-leak-kinds=all \
    --show-reachable=yes \
    --log-fd=9 \
    --gen-suppressions=all \
    --track-fds=yes bin/test 9>test.log

