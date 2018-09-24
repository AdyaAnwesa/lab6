/*
4. MINIMUM 
	b. (By Reference) Goal is the same as above, but this time, the function that finds the minimum  of the numbers should be void, and takes a third, pass by reference parameter; then puts the minimum  in that.
*/

//Library
//taking Standard Definition
#include<iostream>
using namespace std;

//Function called by Driver Function to find minimum
void sum(int n1, int n2, int &m){
	int s=n1+n2;
	cout <<"The Sum of the two numbers is "<< s << endl ; 
	if(n1<n2){
		m=n1;
	}
	else{
		m=n2;
	}
}	//void functions return nothing

//Driver Function
int main(){
	int a; int b; int c;
	cout<<"Hello, Please Enter two numbers \n";
	cin>>a; cin>>b;
	//Calling another function to add the numbers and minimum
	sum(a,b,c);	//Calling by Reference
	cout<<"The minimum of the entered numbers is " << c << "\nThank You" << endl;
	return 4;
}
