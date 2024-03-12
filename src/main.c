// Created by: Anna Shrubok
// 12.03.2024

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "interface.h"

int main (int argc, char *argv[])){

    if(argc != 2)) {
      printf("Error! No argument for the array size");
      return 1;
    }
  
    srand(time(NULL));
    
    int arraySize = atoi(argv[1]);
    int array[arraySize];
    for (int i = 0; i < arraySize; i++)
    arr[i] = rand() % 100;
  
    for (int i = 0; i < arraySize; i++){
      if(isPalindrome(arr[i]))) printf("The number %d is a              palindrome\n", arr[i]");
      else printf("The number %d is not a palindrome\n", arr[i]");
    }

    return 0;
  
}
