/*
5. Write a program that includes the above three (2,3,4) functions. Write a main function that asks user to input 2 variables and asks the user what operation does he want to perform. Based on his input, call the required function and display the output. 
*/

//Library
//taking Standard Definition
#include<iostream>
using namespace std;

//Program to find sum of 2 numbers
//Function called by Driver Function to add the numbers
int sum(int n1, int n2){
	int s=n1+n2;
	return(s);	//Returns the value to Driver Function
}

//Program to find maximum
//Function called by Driver Function to find minimum
int maximum(int n1, int n2){
	if(n1>n2){
		return(n1);	//Returns the value to Driver Function
	}
	else{
		return(n2);
	}
}

//Program to find minimum
//Function called by Driver Function to find minimum
int minimum(int n1, int n2){
	if(n1<n2){
		return(n1);	//Returns the value to Driver Function
	}
	else{
		return(n2);
	}
}


//Driver Function
int main(){
	int a; int b; int d;
	cout<<"Hello, Please Enter two numbers \n";
	cin>>a; cin>>b;
	cout<<"Press 1 to add the numbers, 2 to find the maximum and 3 for minimum value.\nEnter your Choice here: "<<endl;
	cin>> d;

	//Calling other functions to operate on the numbers
	//Calling by Value
	if (d==1){		//Checking if user wants sum
	int c=sum(a,b);
	cout<<"The Sum of entered numbers is " << c << "\nThank You" << endl;
	}
	else if (d==2){		//Checking if user wants Maximum
	int d=maximum(a,b);
	cout<<"The maximum of numbers is " << d << "\nThank You" << endl;
	}
	else if(d==3){		//Checking if user wants Minimum
	int e=minimum(a,b);
	cout<<"The minimum of numbers is " << e << "\nThank You" << endl;
	}
	else{			//Error Message
	cout<<"Invalid input. You must enter either 1 or 2 or 3" << endl;
	}
	return 5;
	
}
