#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    fptr = fopen("filename.txt", "r");
    if (fptr == NULL)
    {
        printf("the file is not opened");
        exit(0);
    }
    return 0;
}