/**
 * @file balance.c
 * @author Avinash.B
 * @brief 
 * @version 0.1
 * @date 2022-03-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include"atm.h"

float checkBalance(float balance) {
    printf("You Choose to See your Balance\n");
    printf("\n\n****Your Available Balance is:   $%.2f\n\n", balance);
    return balance;

}//Check Balance


