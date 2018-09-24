/*
6. Sum of even and odd
	a. Write a function that outputs the sum of all even numbers between firstNum and secondNum. (use loop); create a user-defined function called sumEvenNumbers(). Use call-by-value
	b. Write a function that outputs the sum of all odd numbers between firstNum and secondNum. (use loop); create a user-defined function called sumOddNumbers(). Use call-by-value
	c. Write a function that outputs the sum of the square of the odd numbers between firstNum and secondNum. (use while loop); create a user-defined function called sumSquareOddNumbers(). Use Call-by-Value. 
	d. Write a function that outputs the sum of the square of the odd numbers between firstNum and secondNum. (use while loop); create a user-defined function called sumSquareEvenNumbers(). Use Call-by-Value. 
	e. Write a main program. 
	i. Declare a variable called sumEven in the main() for the sumEvenNumbers(). sumEvenNumbers() is a value returning function. Use sumEven to hold a returned value.
	ii. Declare a variable called sumOdd in the main() for the sumOddNumbers(). sumOddNumbers() is a value returning function. Use sumOdd to hold a returned value.
	iii. Declare a variable called sumSquareEven in the main(), for the sumSqureEvenNumbers(). sumSqureEvenNumbers() is a value returning function. Use sumSquareEven to hold a returned value.
	iv. Declare a variable called sumSquareOdd in the main(), for the sumSqureOddNumbers(). sumSqureOddNumbers() is a value returning function. Use sumSquareOdd to hold a returned value.
	v.Then display the values
*/

//Library
//taking Standard Definition
#include<iostream>
#include<math.h>
using namespace std;

//Function called by Driver Function using CALL BY VALUE to add all even numbers between the two given numbers
int sumEvenNumbers(int firstNum, int secondNum){
	int s=0;
	for(int i=firstNum; i<secondNum; i++){
		if(i%2==0){	//checking if no is even
			s+=i;
		}
	}
	return(s);	//Returns the value to Driver Function
}

//Function called by Driver Function using CALL BY VALUE to add all odd numbers between the two given numbers
int sumOddNumbers(int &firstNum, int &secondNum){
	int s=0;
	for(int i=firstNum; i<secondNum; i++){
		if(i%2 != 0){	//checking if no is odd
			s+=i;
		}
	}
	return(s);	//Returns the value to Driver Function
}

//Function called by Driver Function using CALL BY VALUE to add the squares of all even numbers between the two given numbers
int sumSquareEvenNumbers(int firstNum, int secondNum){
	int s=0;
	int i=firstNum;
	while(i<secondNum){	//using while loop
		if(i%2==0){
			s+=pow(i,2);
		}
		i++;
	}
	return(s);	//Returns the value to Driver Function
}

//Function called by Driver Function using CALL BY VALUE to add the square of all odd numbers between the two given numbers
int sumSquareOddNumbers(int firstNum, int secondNum){
	int s=0;
	int i=firstNum;
	while(i<secondNum){	//using while loop
		if(i%2 != 0){
			s+=pow(i,2);
		}
		i++;
	}
	return(s);	//Returns the value to Driver Function
}

//Driver Function
int main(){
	int a,b;
	cout<<"Hello, Please Enter two numbers \n";
	cin>>a; cin>>b;
	
	int sumEven=sumEvenNumbers(a,b);
	int sumOdd=sumOddNumbers(a,b);
	int sumSquareEven=sumSquareEvenNumbers(a,b);
	int sumSquareOdd=sumSquareOddNumbers(a,b);

	cout<<"Sum of all even numbers between the two entered numbers is " << sumEven << endl;
	cout<<"Sum of all odd numbers between the two entered numbers " << sumOdd << endl;
	cout<<"Sum of square of all even numbers between the two entered numbers is " << sumSquareEven << endl;		
	cout<<"Sum of square of all odd numbers between the two entered numbers is " << sumSquareOdd << endl;

	return 6;
}
