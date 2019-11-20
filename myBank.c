#include "myBank.h"


bollean exit = false;

while(!exit){
	printf("List of operations: \n\n O to open an account \n C to deactivate account \n P to print accounts \n B to get current account balance \n D to deposit to a balance \n W to withdraw from a 	balance
	\n I to add interest to everyone \n E to remove all information and exit the program");
	printf("Please choose an operation");
	char choose;
	scanf("%c" , choose);

			// make small/big char ('O' -- 'o')


	switch(choose){

	case o:

		open_account(){ //O
			for (size_t i = 0; i < 50 ; i++) {
					if(accounts[i][1] == 0){
						printf("Please enter amount to deposit :");
						double amount;
						scanf("%lf" , amount);
						accounts[i][0] = amount;
						accounts[i][1] = 1;	
						printf("Your account number is : %d" , i+901);
						break;
					}
			}
			
			if(i==50){
				printf("Unfortunately there is no unused account . . .");
			}
		}

	case c:

		deactivate_account(int acc_number){  //C
			if (accounts[acc_number - 901][1]) == 1){
					accounts[acc_number - 901][0] = 0;
					accounts[acc_number - 901][1] = 0;
			}
			else{
				printf("The account number %d is already closed /n", acc_number);
			}
		}

	case p:

		print_accounts(){ //P
			for (size_t i = 0; i < 50 ; i++) {
				if (accounts[i][1]) == 1){
					printf("Account numbr :%d ---- balance :%lf\n" , i + 901 , accounts[i][0]);
				}
			}
		}
	case b:

		get_balance(int acc_number){ //B

			if (accounts[acc_number - 901][1]) == 1){
					printf("Your balance is %lf\n", accounts[acc_number - 901][0]);
			}
			else{
					printf("The account number %d is already closed /n", acc_number);
			}
		}

	case d:

	deposit_to_balance(int acc_number, double amount){ //D
		if (accounts[acc_number - 901][1]) == 1){
				accounts[acc_number - 901][0] = accounts[acc_number - 901][0] + amount;
				printf("Your balance is %lf\n", accounts[acc_number - 901][0]);
		}
		else{
				printf("The account number %d is closed /n", acc_number);
			}
	}
  case w:

	withdraw_from_balance(int acc_number, double amount){ //W
		if (accounts[acc_number - 901][1]) == 1){
			if (accounts[acc_number - 901][0] < amount) {
				printf("Insufficient funds /n");
			}
			else{
				accounts[acc_number - 901][0] = accounts[acc_number - 901][0] - amount;
				printf("Your balance is %lf\n", accounts[acc_number - 901][0]);
		
			}
		}	
		else{
				printf("The account number %d is closed /n", acc_number);
			}
			
	}


  case i:

		add_interest_to_all(double interest){ //I
		for (int i = 0; i < 50; i++) {
			accounts[i][0] = accounts[i][0] * ((interest/100)+1);
		}
		printf("Interest was updated for all accounts \n");
	}
	case e:

		reset_all_and_exit(){ //E
			for (int i = 0; i < 50; i++) {
				accounts[i][0] = 0;
				accounts[i][1] = 0;
			}
			printf("All of the accounts were removed. \n Thank you and goodbye.");
			exit = true;
		}
}
