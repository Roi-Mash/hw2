#include "myBank.h"


bollean exit = false;

while(false){
	printf("List of operations: \n\n O to open an account \n C to deactivate account \n P to print accounts \n B to get current account balance \n D to deposit to a balance \n W to withdraw from a 	balance
	"\n I to add interest to everyone \n E to remove all information and exit the program");
	printf("Please choose an operation");
	char choose;
	scanf("%c" , choose);

			// make small/big char ('O' -- 'o') 


	switch(choose){

	case o:

	open_account(); //O
	deactivate_account(int acc_number); //C
	print_accounts(); //P
	get_balance(int acc_number); //B
	deposit_to_balance(int acc_number, double amount); //D
	withdraw_from_balance(int acc_number, double amount); //W
	add_interest_to_all(double interest); //I
	reset_all_and_exit(); //E


}



