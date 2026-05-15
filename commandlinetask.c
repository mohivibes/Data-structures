#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char *endptr = NULL;
    char *name = NULL;
    long eng = 0;
    long maths = 0;
    long total = 0;

    if (argc != 4) {
        printf("Usage: %s <name> <english_marks> <maths_marks>\n", argv[0]);
        return 1;
    }

    name = argv[1];

    eng = strtol(argv[2], &endptr, 10);
    if (*argv[2] == '\0' || *endptr != '\0') {
        printf("English marks must be a valid number.\n");
        return 1;
    }

    maths = strtol(argv[3], &endptr, 10);
    if (*argv[3] == '\0' || *endptr != '\0') {
        printf("Maths marks must be a valid number.\n");
        return 1;
    }

    total = eng + maths;

    printf("Student name: %s\n", name);
    printf("English marks: %ld\n", eng);
    printf("Maths marks: %ld\n", maths);
    printf("Total marks: %ld\n", total);

    return 0;
}
