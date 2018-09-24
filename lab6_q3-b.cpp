/*
3. MAXIMUM
	b. (By Reference) Goal is the same as above, but this time, the function that finds the maximum should be void, and takes a third, pass by reference parameter; then puts the maximum in that.
*/

//Library
//taking Standard Definition
#include<iostream>
using namespace std;

//Function called by Driver Function to find maximum
void sum(int n1, int n2, int &m){
	int s=n1+n2;
	cout <<"The Sum of the two numbers is "<< s << endl ; 
	if(n1>n2){
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
	//Calling another function to add the numbers and maximum
	sum(a,b,c);	//Calling by Reference
	cout<<"The Maximum of the entered numbers is " << c << "\nThank You" << endl;
	return 3;
}
