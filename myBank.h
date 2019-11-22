#include "stdio.h"
double accounts [50][2] = { 0 };


void open_account(); //O
void deactivate_account(int acc_number); //C
void print_accounts(); //P
void get_balance(int acc_number); //B
void deposit_to_balance(int acc_number, double amount); //D
void withdraw_from_balance(int acc_number, double amount); //W
void add_interest_to_all(double interest); //I
void reset_all_and_exit(); //E
