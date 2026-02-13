//Simple ATM system

#include <iostream>
#include <fstream>
using namespace std;

int main() {
	
	//Variables
	int acctNumber; 
	double beginningBalance; 
	double accountBalance; 
	double amountDeposited=0.0; 
	int numberOfDeposits=0; 
	double amountWithdrawn=0.0; 
	int numberOfWithdrawals=0; 
	double interestPaid=0; 
	double transactionAmount;
	
	//Named Constants
	const double minimumBalance = 1000.00;
	const double serviceCharge = 25.00; 
	
	char transactionCode;
    bool isServiceCharged = false; 
    
    //Heading
    cout <<"******************************************" <<endl;
    cout <<"* \t Welcom to ATM System \t \t *" <<endl;
    cout <<"******************************************" <<endl;
    
    cout <<" " <<endl;
    
    //input file variable
	ifstream infile; 
	infile.open("1002.txt");
	
	//Error Handling
	if (!infile) {
    	cout << "Error.....! Cannot open file ! " << endl;
    	return 1;
	}
	
	//Read file
	infile >> acctNumber >> beginningBalance;
	accountBalance = beginningBalance;
	
	infile >> transactionCode >> transactionAmount;
	
	// EOF Method
	while (infile)
    {
        switch (transactionCode)
        {
            case 'D': // Deposit
            case 'd':
                accountBalance += transactionAmount;
                amountDeposited += transactionAmount;
                numberOfDeposits++;
                break;

            case 'I': // Interest
            case 'i':
                accountBalance += transactionAmount;
                interestPaid += transactionAmount;
                break;

            case 'W': // Withdrawal
            case 'w':
                accountBalance -= transactionAmount;
                amountWithdrawn += transactionAmount;
                numberOfWithdrawals++;

                if (accountBalance < minimumBalance && !isServiceCharged)
                {
                    accountBalance -= serviceCharge;
                    isServiceCharged = true;
                }
                break;

            default:
                cout << "Invalid transaction code: " <<transactionCode << endl;
        }

        infile >> transactionCode >> transactionAmount;
    }
    
    infile.close();
	
//------------------ Output ----------------------------------------------------------
	
	cout << "------------------------------------------------" << endl;
	cout << "Summary of Month " << endl;
	cout << "------------------------------------------------" << endl;
	
	cout << "Account Number: " << acctNumber << endl;
    cout << "Beginning Balance: $" << beginningBalance << endl;
    cout << "Ending Balance: $" << accountBalance << endl;
    cout << "Interest Paid: $" << interestPaid << endl;
    cout << "Amount Deposited: $" << amountDeposited << endl;
    cout << "Number of Deposits: " << numberOfDeposits << endl;
    cout << "Amount Withdrawn: $" << amountWithdrawn << endl;
    cout << "Number of Withdrawals: " << numberOfWithdrawals << endl;
    
    if (isServiceCharged)
        cout << "Service Charge: $" << serviceCharge << endl;
    else
        cout << "Service Charge: $0.00" << endl;
	
}
