/*
2.SUM:
	a. (By Value) Write a program with a function that takes two int parameters, adds them together, then returns the sum. The program should ask the user for two numbers, then call the function with the numbers as arguments, and tell the user the sum.
*/

//Library
//taking Standard Definition
#include<iostream>
using namespace std;

//Function called by Driver Function to add the numbers
int sum(int n1, int n2){
	int s=n1+n2;
	return(s);	//Returns the value to Driver Function
}

//Driver Function
int main(){
	int a; int b;
	cout<<"Hello, Please Enter two numbers \n";
	cin>>a; cin>>b;
	//Calling another function to add the numbers
	int c= sum(a,b);	//Calling by Value
	cout<<"The Sum of entered numbers is " << c << "\nThank You" << endl;
	return 2;
	
}
