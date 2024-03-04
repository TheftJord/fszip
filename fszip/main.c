/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   main.c
 * Author: student
 *
 * Created on March 3, 2024, 5:30 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include "fszip.h"

/*
 * 
 */
int main(int argc, char** argv) {
    const char* input=argv[1];
    fszip(input);
    return (EXIT_SUCCESS);
}

