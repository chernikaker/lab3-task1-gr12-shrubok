// Created by: Anna Shrubok
// 12.03.2024

#include "interface.h"

boolean isPalindrome(int number) {
  
    int reversedNumber = 0;
    int originalNumber = number;
    while (number != 0){
        reversedNumber = reversedNumber * 10 + number % 10;
        number /= 10;
    }
    return reversedNumber == originalNumber;
  
}