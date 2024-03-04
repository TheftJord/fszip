/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   primary.c
 * Author: student
 *
 * Created on March 3, 2024, 7:30 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include "fsunzip.h"

/*
 * 
 */
int main(int argc, char** argv) {
    const char* inputFile=argv[1];
    fsunzip(inputFile);
    return (EXIT_SUCCESS);
}

