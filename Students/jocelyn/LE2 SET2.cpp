#include <iostream>
using namespace std;

int main(){
	
	int num, sum = 0, digit;

	cout << "Enter an integer number: ";
	cin >> num;
	
	while (num > 0){
		digit = num % 10;
		cout << digit;
		sum = sum + digit;
		num = num / 10;
		if (num > 0){
			cout << " + ";
		}
	}
	
	cout << " = " << sum << endl;
	
	if ((sum % 2 == 0)&&(sum % 4 == 0)&&(sum % 5 == 0)){
		cout << sum << " is even number & multiples of 4 and 5";
	}else if ((sum % 2 == 0)&&(sum % 4 == 0)){
		cout << sum << " is even number & multiples of 4";
	}else if ((sum % 2 == 0)&&(sum % 5 == 0)){
		cout << sum << " is even number & multiples of 5";
	}else if (sum % 2 == 0){
		cout << sum << " is even number";
	}else if ((sum % 2 == 1)&&(sum % 4 == 0)){
		cout << sum << " is odd number & multiples of 4";
	}else if ((sum % 2 == 1)&&(sum % 5 == 0)){
		cout << sum << " is odd number & multiples of 5";
	}else if (sum % 2 == 1){
		cout << sum << " is odd number";
	}
	
	return 0;
}