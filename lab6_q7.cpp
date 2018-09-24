/*
7. UpperCase and LowerCase
	a. Write a user-defined function toUpper() that returns the uppercase of the inputChar received. Use call-by-value.
	b. Write a user-defined function toLower() that returns the lowercase of the inputChar received. Use call-by-value.
	c. Write a main program, that calls the above function based on the input of the user. If the user enters a lower case character, it should automatically detect it and call toUpper() and display the upper case value and vice-versa. 
*/

//Library
#include<iostream>
using namespace std;

//Using call by value to write a user-defined function toUpper that returns the Uppercase of the input char received
char toUpper(char letter){
	int i,j;
	i= int(letter);
	j= char(i-32);
	return(j);
}

//Using call by value to wrie a user-defined function toLower that returns the Lowercase of the input char received
char toLower(char letter){
	int i,j;
	i=int(letter);
	j= char(i+32);
	return (j);
}

//writting a main program that call the above function based on the input of the user. If the user enters a lower case character, it should automatically detect it and call toUpper() and display the uppercase value and vice-versa.
int main(){
	char letter; int i;
	cout<<"Hello\nPlease enter a letter"<<endl;
	cin>>letter;
	i=int(letter);

	//Condition to whether the entered letter is in lowercase or not
	if(i>=97 && i<=122){
		cout<<"The letter in Uppercase is : "<<toUpper(letter)<<endl;
	}

	//Condition to check whether the entered letter is in Uppercase or not
	else if(i>=65 && i<=90){
		cout<<"The letter in Lowercase is : "<<toLower(letter)<<endl;
	}

	else{
		cout<<"Invalid Input. You must enter a Letter only."<<endl;
	}

	return 7;
}
