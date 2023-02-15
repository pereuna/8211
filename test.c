#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "8211.h"

struct obj *feature_obj[10];
char *data_set_file;
struct edges ed; 
extern int read_file();

int main(int argc, char **argv)
{

    if (argc != 2) {
	printf("usage: ./test <data set file>\n");
	exit(0);
    }
    data_set_file = strdup(argv[1]);
    read_file();
    printf("ed.WLON:%d\n", ed.WLON);
    printf("ed.ELON:%d\n", ed.ELON);
    printf("ed.SLAT:%d\n", ed.SLAT);
    printf("ed.NLAT:%d\n", ed.NLAT);
    return 0;
}
