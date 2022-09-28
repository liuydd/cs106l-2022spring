#include <string>
#include <iostream>
#include <cmath> //gives us pow and sqrt!

using std::string; using std::cout;
using std::cin; using std::pow;
using std::sqrt; using std::endl;

//want: a function named quadratic that will take in 3 doubles and return
//a combination of: does a solution exist, and if so, what is it?
double quadratic(double a,double b,double c)
{
	//get radical, test if negative, return indicating no roots
	double delta=b*b-4*a*c;
	if (delta<0)
		return -1;
	else{
		double root1,root2;
		root1=(sqrt(delta)-b)/(2*a);
		root2=-(sqrt(delta)+b)/(2*a);
		cout<<"root1="<<root1<<" "<<"root2="<<root2<<endl;
		return 0;
	}
	//otherwise get roots and return
	
}

int main(){
	//get 3 doubles (ax^2 + bx + c)
	double a, b, c;
	cout << "Give me 3 coefficients: " << endl;

	//This line gets 3 numbers from user input and stores them in a, b and c 
	//we will learn more about cin on Thursday
	cin >> a >> b >> c;
	//some call to quadratic function!

	//get roots if they exist

	//print accordingly

	return 0;
}