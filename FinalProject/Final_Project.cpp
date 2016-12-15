//---------------------------------------------------------------------//
//Programmer:Musa Ali 		//
//Purpose: Finding the GCD using Euclidean Algorithim and Stein's Algorithim
//---------------------------------------------------------------------//

#include <stdio.h>
#include <iostream>

using namespace std;

int Stein_GCD(int num1, int num2)
{
    //if one of them is zero, return the other. Base cases
    if (num1 == 0){ 
        return num2;
    }
    if (num2 == 0){
        return num2;
    }
    if(num1 == num2){
    	return num1;
    }
 
    bool num1_IsEven = (num1 % 2) == 0; //are they even?
	bool num2_IsEven = (num2 % 2) == 0;
 //Using bit shift operators
	if (num2_IsEven && num1_IsEven){ // even numbers divide bothe values by 2 recursively and find the GCD of that(recursive). Multiply that by 2.
	    return Stein_GCD(num1 >> 1, num2 >> 1) << 1;
	}
	else if (num1_IsEven && !num2_IsEven){ //if one is even and the other is not, divide it by 2 and find the GCD of that recurively with the other number
	    return Stein_GCD(num1 >> 1, num2);
	}
	else if (num2_IsEven){ //if the 2nd number is even and the other is not. Multiply it by 2 and find the GCD with the first.
	    return Stein_GCD(num1, num2 >> 1);
	}
	else if (num1 > num2){ //if the first number is greater. Do Euclidean Algorithim
	    return Stein_GCD((num1 - num2) >> 1, num2); //(larger-smaller, smaller). Divide by 2 because result will be even.
	}
	else
	    return Stein_GCD(num1, (num2 - num1) >> 1); //return the subtraction of the 2 multiplied by 2. Get the GCd of the firstnumber and that result
}

int EuclidGCD(int &larger, int &smaller) {

	if(smaller == 0)
	{
		return larger; //base case
	}
	else 
	{
		int remainder = larger%smaller; //not sure why this works like this.....
		return EuclidGCD(smaller, remainder); //replace larger with the mod of the two and smaller with larger
	}
}

int main(){
	int num1 = 60;
	int num2 = 45;

	cout << endl << "Euclid's Algorithim" << endl << "-------------------------------------" << endl;
	cout << "num 1:" << num1 << endl << "num 2 :" << num2 << endl << "GCD:" << EuclidGCD(num1,num2) << endl;
	cout << endl << "Stein's Algorithim" << endl << "------------------------------" << endl;
	cout << "num 1:" << num1 << endl << "num 2 :" << num2 << endl << "GCD:" << Stein_GCD(num1,num2) << endl;

}