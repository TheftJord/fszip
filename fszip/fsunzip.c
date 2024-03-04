/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/file.c to edit this template
 */
#include <stdio.h>
#include <stdlib.h>

void fsunzip(const char* inputFile){
    FILE* input=fopen(inputFile,"r");
    char c;
    int counter=0;
    for(c=getc(input);c!=EOF;c=getc(input)){
        counter++;
    }
    char holder[counter];
    char temp;
    int i=0;
    while((temp=fgetc(input))!=EOF){
        fgets(holder,counter,input);
        i++;
    }
    fread(holder,5,counter,stdout);
    char temp2;
    char tempHolder[counter];
    while((temp2=fgetc(stdout))!=EOF){
        fgets(tempHolder,counter,stdout);
        i++;
    }
    for(int i=0;i<sizeof(tempHolder);i++){
        printf("%c",tempHolder[i]);
    }
    fclose(input);
}