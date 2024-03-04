/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/file.c to edit this template
 */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void fsunzip(const char* inputFile){
    FILE* input=fopen(inputFile,"r");
    if(input==NULL){
        printf("file has failed");
        return;
    }
    //puts char from file into array
    char array[300];
    fgets(array,sizeof(array),input);
    //prints char into message
    int temp;
    for(int i=0;i<sizeof(array)-1;i++){
        temp=0;
        while(isdigit(array[i])&&i<sizeof(array)){
            temp=temp*10;
            temp=temp+(array[i]-'0');
            i++;
        }
        for(int j=0;j<temp;j++){
            putchar(array[i]);
        }
    }
    //closes file
    fclose(input);
}