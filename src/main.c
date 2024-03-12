// Created by: Anna Shrubok
// 12.03.2024

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "interface.h"

// The main function is used to test the isPalindrome function from interface.h file.

//Firstly, main function checks the number of command line
//arguments. If it does not equal to 2 (only array size), the
//program prints an error message and returns 1. Othewise, it
//prepares rand function and initializes an array of size equal to
//the first command line argument. Every array element is a
//random number from 0 to 99. Then, the main function iterates
//over the array and calls the isPalindrome function for each
//element and prints the result.

//Input: argc - number of command line arguments, argv - array of
//command line arguments

//Output: 0 - if the program runs successfully, 1 - otherwise

int main (int argc, char *argv[]){

    if(argc != 2) {
      printf("Error! Invalid number of args");
      return 1;
    }
  
    srand(time(NULL));
    
    int arraySize = atoi(argv[1]);
    int array[arraySize];
    for (int i = 0; i < arraySize; i++)
    array[i] = rand() % 100;
  
    for (int i = 0; i < arraySize; i++){
      if(isPalindrome(array[i])==1) printf("The number %d is a          palindrome\n", array[i]);
      else printf("The number %d is not palindrome\n", array[i]);
    }

    return 0;
}
