/*
4. MINIMUM 
	a. (By Value) Write a program with a function that takes two int parameters, finds the min, then returns the minimum. The program should ask the user for two numbers, then call the function with the numbers as arguments, and tell the user the minimum.
*/

//Library
//taking Standard Definition
#include<iostream>
using namespace std;

//Function called by Driver Function to find minimum
int minimum(int n1, int n2){
	int s=n1+n2;
	cout<<"Sum of the numbers is "<< s << endl;
	if(n1<n2){
		return(n1);	//Returns the value to Driver Function
	}
	else{
		return(n2);
	}
}

//Driver Function
int main(){
	int a; int b;
	cout<<"Hello, Please Enter two numbers \n";
	cin>>a; cin>>b;
	//Calling another function to find minimum
	int c= minimum(a,b);	//Calling by Value
	cout<<"The minimum of numbers is " << c << "\nThank You" << endl;
	return 4;
	
}
