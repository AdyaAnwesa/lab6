/*
2. SUM: 
	b. (By Reference) Goal is the same as above, but this time, the function that adds the numbers should be void, and takes a third, pass by reference parameter; then puts the sum in that.
*/

//Library
//taking Standard Definition
#include<iostream>
using namespace std;

//Function called by Driver Function to add the numbers
void sum(int n1, int n2, int &s){
	s=n1+n2;
}	//void functions return nothing

//Driver Function
int main(){
	int a; int b; int c;
	cout<<"Hello, Please Enter two numbers \n";
	cin>>a; cin>>b;
	//Calling another function to add the numbers
	sum(a,b,c);	//Calling by Reference
	cout<<"The Sum of entered numbers is " << c << "\nThank You" << endl;
	return 2;
}
