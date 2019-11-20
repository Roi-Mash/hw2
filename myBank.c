#include "stdio.h"

//Bank Functions
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
				printf("Unfortunately there is no unused account \n Please try again later...");
}
deactivate_account(int acc_number){  //C
	if (accounts[acc_number - 901][1]) == 1){
			accounts[acc_number - 901][0] = 0;
			accounts[acc_number - 901][1] = 0;
	}
	else{
		printf("The account number %d is already closed \n", acc_number);
	}
}

print_accounts(){ //P
	for (size_t i = 0; i < 50 ; i++) {
		if (accounts[i][1]) == 1){
			printf("Account numbr :%d ---- balance :%lf\n" , i + 901 , accounts[i][0]);
		}
	}
}

get_balance(int acc_number){ //B

	if (accounts[acc_number - 901][1]) == 1){
			printf("Your balance is %lf\n", accounts[acc_number - 901][0]);
	}
	else{
			printf("Error: the account number %d is already closed \n", acc_number);
	}
}

deposit_to_balance(int acc_number, double amount){ //D
	if (accounts[acc_number - 901][1]) == 1){
			accounts[acc_number - 901][0] = accounts[acc_number - 901][0] + amount;
			printf("Your balance is %lf\n", accounts[acc_number - 901][0]);
	}
	else{
			printf("The account number %d is now closed \n", acc_number);
		}
}

withdraw_from_balance(int acc_number, double amount){ //W
	if (accounts[acc_number - 901][1]) == 1){
		if (accounts[acc_number - 901][0] < amount) {
			printf("Insufficient funds \n");
		}
		else{
			accounts[acc_number - 901][0] = accounts[acc_number - 901][0] - amount;
			printf("Your balance is %lf\n", accounts[acc_number - 901][0]);
	}}
	else{
			printf("Unable to withdraw. \n The account number %d is closed \n", acc_number);
		}
}
reset_all_and_exit(){ //E
			for (int i = 0; i < 50; i++) {
				accounts[i][0] = 0;
				accounts[i][1] = 0;
			}
			printf("All of the accounts were deleted succesfully. \n Thank you and goodbye");
			exit = true;
		}
}

add_interest_to_all(double interest){ //I
for (int i = 0; i < 50; i++) {
	accounts[i][0] = accounts[i][0] * ((interest/100)+1);
}
printf("Interest was updated for all accounts succesfully \n");
}
