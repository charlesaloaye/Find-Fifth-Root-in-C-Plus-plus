// A PROGRAM TO CALCULATE THE FIFTH ROOT
#include <iostream>
#include <cmath>
using namespace std;
float findFifthRoot(float userInput){

	if(!cin.fail()){
		float result,fifthPower = 1.0/5.0;
		cout <<"Enter the Number to check"<<endl;
		cin >> userInput;
		result = pow(userInput,fifthPower);

		cout << ceil(result)<<endl;
	}
}
int main(){

	findFifthRoot(25);

}
