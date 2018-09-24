/*
1. Tax Rate Calculation using Functions
	a. Write a function that obtains from the user and returns a value for unitCst, units, and taxRt to the calling module. Choose an appropriate name for this function.
	b. Write a function that receives the unitCst, units, and taxRt and returns to the calling module the salesTx and totDue. Choose an appropriate name for this function.
	c. Write a function that receives the unitCst, units, taxRt, salesTx, and totDue and outputs them in a very readable format. Choose an appropriate name for this function.
	d. Write a main function with variables called unitCost, unitsPurch, taxRate, salesTax, and totalDue. Your program should call the functions listed above.
Pseudocode and Indentation must be present.
*/ 

//Library
//taking Standard Definition
#include<iostream>
using namespace std;

//Function called by Driver Function to return required values

void returnValues(int &unitCst, int&units, int &taxRt){
	cout<< "Enter UnitCst \n";
	cin>> unitCst;
	cout<< "Enter value for Unit cost \n";
	cin>> units;
	cout<< "Enter value for tax rate \n";
	cin>> taxRt;
}

//Function called by Driver Function to Calculate Sales Tax and Total amount zdue

void calcTax(int unitCst, int units, int taxRt, int &salesTx, int &totDue){
	salesTx=taxRt*(units*unitCst);
	totDue=salesTx+(units*unitCst);
}

//Function called by Driver Function to Print All the Values

void printValues(int unitCst, int units, int taxRt, int salesTx, int totDue){
	cout<<"Units is "<<unitCst<<"\nUnit cost is Rupees "<<units<<"\nUnit Rate is "<<taxRt<<"\nSales Tax is "<<salesTx<<"\nTotal amount due is Rupees "<<totDue<<endl;
}

int main(){
	int unitCst, units, taxRt, salesTx, totDue;
	returnValues(unitCst, units, taxRt);
	calcTax(unitCst, units, taxRt, salesTx, totDue);
	printValues(unitCst, units, taxRt, salesTx, totDue);
	cout<<"Thank You" <<endl;
	return 1;
}
