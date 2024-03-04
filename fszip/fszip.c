/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/file.c to edit this template
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void fszip(const char* inputFile){
    //gets file and opens
    FILE* input=fopen(inputFile,"r");
    if(input==NULL){
        printf("file has failed");
    }
    //puts char from file into array
    char array[300];
    fgets(array,sizeof(array),input);
    //converts normal text to weird and puts it into stdout
    int charCounter=1;

    for(int i=0;i<sizeof(array)-1;i++){
        char present=array[i];
        char next=array[i+1];
        if(present==next){
            charCounter++;
        }
        else if(present!=next){
            printf("%d%c",charCounter,present);
            charCounter=1;
        }
    }
    //closes file
    fclose(input);
    printf("pass 6\n");
}
