#include <iostream>
using namespace std;

int main() {
	int select, number, pin, c_pin, new_pin, attempts;
	string digits;
	char option, Yes, No;
	float reference, amount, balance, counter, deposit;
	const int defaultpin = 0000;
	attempts = 0;
	balance = 1000;
	
	cout<<"WELCOME TO EUGENE'S MOMO WALLET!"<<endl;
	cout<<"Main Menu"<<endl;
	cout<<"1. Send Money"<<endl;
	cout<<"2. Deposit Money"<<endl;
	cout<<"3. Check Balance"<<endl;
	cout<<"4. Reset/Change Pin"<<endl;
	cout<<"Please select an option(1-4)"<<endl;
	cin>>select;
	
	if(select==1){
		cout<<"Enter Mobile Number"<<endl;
		cin>>number;
		cout<<"Enter amount to send"<<endl;
		cin>>amount;
		cout<<"Send Ghc: "<<amount<<" to "<<number<<endl;
		cout<<"Enter Reference"<<endl;
		cin>>reference;
		cout<<"Please enter your PIN"<<endl;
		cin>>pin;
		
		do{
			attempts++;
			if(pin!= defaultpin){
				cout<<"Incorrect Pin!. Please try again"<<endl;
			}
			else if(pin==defaultpin){
				cout<<"You have successfully sent Ghc:"<<amount <<" to " <<number<<endl;
				cout<<"Your current balance is Ghc:"<<balance-amount<<endl;
			}
		} while(pin!=defaultpin&& attempts>3);
		if(attempts>3){
			cout<<"Maximum attempts reached!";
			cout<<"Exiting Program"<<endl;
		}
		switch(pin){
			break;
		}
	}
	else if(select==3){
		do{
			cout<<"Please enter your 4-digit pin:"<<endl;
			cin>>pin;
			attempts++;
			if(pin!= defaultpin){
				cout<<"Incorrect Pin!. Please try again"<<endl;
			}
			else if(pin==defaultpin){
				cout<<"Your balance is Ghc: 1000."<<endl;
			}
		}while (pin!=defaultpin&& attempts>3);
		if(attempts>3){
			cout<<"Maximum attempts reached!";
			cout<<"Exiting Program"<<endl;
		}
		switch(pin){
			break;
		}
	}
	else if(select==4){
		cout<<"Are You Sure You Want To Change Your Pin?"<<endl;
		cin>>option;
		if(option==Yes){
			cout<<"Enter New Pin"<<endl;
			cin>>new_pin;
			pin==new_pin;
			cout<<"Your New Pin Is:"<<new_pin;
		}
	}
     else if(select==2){
     	cout<<"Enter deposit amount."<<endl;
     	cin>>deposit;
     	cout<<"You have successfully deposited Ghc:"<<deposit<<endl;
     	cout<<"Current total balance is Ghc:"<<1000+deposit<<endl;
     	{
     		switch(pin){
     			break;
			 }
		 }
     	
	 }
	return 0;
}
