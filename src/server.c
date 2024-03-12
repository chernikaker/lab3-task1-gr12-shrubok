// Created by: Anna Shrubok
// 12.03.2024

#include "interface.h"

//Function in this file is an implementation of the interface.h
//function and is used in main.c file

//Function isPalindrome determines whether a number is a
//palindrome. It makes a copy of the number and then reverses the
//input number. To do this, the function uses a while loop to
//extract the last digit of the input number and adds it to the
//reversed number. The function then divides the input number by
//10 to remove the last digit. The loop continues until the input
//number is 0.

//Input: number - a number
//Output: 1 - if the number is a palindrome, 0 - otherwise

int isPalindrome(int number) {
  
    int reversedNumber = 0;
    int originalNumber = number;
    while (number != 0){
        reversedNumber = reversedNumber * 10 + number % 10;
        number /= 10;
    }
    return reversedNumber == originalNumber;
  
}