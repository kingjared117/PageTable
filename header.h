#include <stdlib.h>
#include <stdio.h>
#include <malloc.h>
#include <time.h>
#include <pthread.h>
#include <inttypes.h>
#include <unistd.h>
#include <readline/readline.h>
#include <readline/history.h>

struct TableEntry
{
    int valid;
    int ph_addr;
};

int map( int pid, int v_addr, int value);
int store(int pid, int v_addr, int value);
int load(int pid, int v_addr);
