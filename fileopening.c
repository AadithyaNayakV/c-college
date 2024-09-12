#include<stdio.h>
#include<stdlib.h>
void main(){
FILE* fptr;
fptr=fopen("filename.txt","w");
  if (fptr == NULL)
    {
        printf("the file is not opened");
        exit(0);
    }
    fprintf(fptr,"opened successfully");
}