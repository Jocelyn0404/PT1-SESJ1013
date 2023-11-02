#include <iostream>
using namespace std;

int main(){
	
	int num, sum = 1, digit;

	cout << "Enter an integer number: ";
	cin >> num;
	
	do{
		digit = num % 10;
		cout << digit;
		sum = sum * digit;
		num = num / 10;
		if (num > 0){
			cout << " * ";
		}
	}while (num > 0);
	
	cout << " = " << sum << endl;
	
	if ((sum % 2 == 0)&&(sum % 3 == 0)&&(sum % 5 == 0)){
		cout << sum << " is even number & multiples of 3 and 5";
	}else if ((sum % 2 == 0)&&(sum % 3 == 0)){
		cout << sum << " is even number & multiples of 3";
	}else if ((sum % 2 == 0)&&(sum % 5 == 0)){
		cout << sum << " is even number & multiples of 5";
	}else if (sum % 2 == 0){
		cout << sum << " is even number";
	}else if ((sum % 2 == 1)&&(sum % 3 == 0)&&(sum % 5 == 0)){
		cout << sum << " is odd number & multiples of 3 and 5";
	}else if ((sum % 2 == 1)&&(sum % 3 == 0)){
		cout << sum << " is odd number & multiples of 3";
	}else if ((sum % 2 == 1)&&(sum % 5 == 0)){
		cout << sum << " is odd number & multiples of 5";
	}else if (sum % 2 == 1){
		cout << sum << " is odd number";
	}
		
	return 0;
}
