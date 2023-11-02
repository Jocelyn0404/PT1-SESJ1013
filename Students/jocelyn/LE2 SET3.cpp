#include <iostream>
using namespace std;

int main(){
	
	int num, sum = 1, digit;

	cout << "Enter an integer number: ";
	cin >> num;
	
	while (num > 0){
		digit = num % 10;
		cout << digit;
		sum = sum * digit;
		num = num / 10;
		if (num > 0){
			cout << " * ";
		}
	}
	
	cout << " = " << sum << endl;
	
	if ((sum % 4 == 0)&&(sum % 5 == 0)&&(sum % 7 == 0)){
		cout << sum << " is multiples of 4, 5 and 7";
	}else if ((sum % 4 == 0)&&(sum % 5 == 0)){
		cout << sum << " is multiples of 4 and 5";
	}else if ((sum % 4 == 0)&&(sum % 7 == 0)){
		cout << sum << " is multiples of 7 and 4";
	}else if ((sum % 5 == 0)&&(sum % 7 == 0)){
		cout << sum << " is multiples of 7 and 5";
	}else if (sum % 7 == 0){
		cout << sum << " is multiples of 7";
	}else if (sum % 5 == 0){
		cout << sum << " is multiples of 5";
	}else if (sum % 4 == 0){
		cout << sum << " is multiples of 4";
	}else{
		cout << sum << " is not multiples of 4, 5 or 7";
	}
		
	return 0;
}