#include "stdio.h"
#include "myBank.h"
#include <stdbool.h>

int main() {
  bool exit = false;
  while(!exit){
    char display_functions[] = "\nList of operations: \n\n O   to open an account \n C   to deactivate account \n P   to print accounts \n B   to get current account balance \n D   to deposit to a balance \n W   to withdraw from a balance \n I   to add interest to everyone \n E   to remove all information and exit the program \n Please enter an operation key: \n";
    printf("%s",display_functions);
    char choose;
    scanf(" %c" , &choose);
    choose = toupper(choose);
  	switch(choose){

  	case 'O':
  	open_account();
  	break;

  	case 'C':
  	printf("Please enter account number: \n");
  	int acc_num;
  	scanf("%d" , &acc_num);
  	deactivate_account(acc_num);
  	break;

  	case 'P':
  	print_accounts();
  	break;

  	case 'B':
  	printf("Please enter account number: \n");
  	int acc_num1;
  	scanf("%d" , &acc_num1);
  	get_balance(acc_num1);
  		break;

  	case 'D':
  	printf("Please enter account number: \n");
  	int acc_num2;
  	scanf("%d" , &acc_num2);
    if(acc_num2>=901 && acc_num2<=950){
  	 printf("Please enter required amount: \n");
  	 double amount;
  	 scanf("%lf" , &amount);
  	 deposit_to_balance(acc_num2, amount);
    }
    else{
  		printf("Error: Unable to withdraw. \n The account number %d does not exist \n", acc_num2);
  	}
  	break;

    case 'W':
  	printf("Please enter account number: \n");
  	int acc_num3;
  	scanf("%d" , &acc_num3);
    if(acc_num3>=901 && acc_num3<=950){
      printf("Please enter required amount: \n");
  	  double amount1;
  	  scanf("%lf" , &amount1);
  	  withdraw_from_balance(acc_num3, amount1);
    }
    else{
      printf("Error: Unable to withdraw. \n The account number %d does not exist \n", acc_num3);
    }
  	break;

    case 'E':
    reset_all_and_exit();
    exit = true;
    break;

    case 'I':
    printf("Please enter required interest in precentage: \n");
  	double interest;
  	scanf("%lf%" , &interest);
    add_interest_to_all(interest);
    break;

  	default:
  	printf("Unrecognized input, please try again. \n");
  	break;
  }
}
  return 0;
}
