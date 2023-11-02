#include <iostream>
using namespace std;

int main(){
	
	int num, sum = 0, digit;
	
	cout << "Enter an integer number: ";
	cin >> num;

	do{
		digit = num % 10;
		cout << digit;
		sum = sum + digit;
		num = num / 10;
		if (num > 0){
			cout << " + ";
		}
	}while (num > 0);
	
	cout << " = " << sum << endl;
	
	if ((sum % 3 == 0)&&(sum % 4 == 0)&&(sum % 5 == 0)){
		cout << sum << " is multiples of 3, 4 and 5";
	}else if ((sum % 4 == 0)&&(sum % 5 == 0)){
		cout << sum << " is multiples of 4 and 5";
	}else if ((sum % 3 == 0)&&(sum % 5 == 0)){
		cout << sum << " is multiples of 3 and 5";
	}else if ((sum % 3 == 0)&&(sum % 4 == 0)){
		cout << sum << " is multiples of 3 and 4";
	}else if (sum % 5 == 0){
		cout << sum << " is multiples of 5";
	}else if (sum % 4 == 0){
		cout << sum << " is multiples of 4";
	}else if (sum % 3 == 0){
		cout << sum << " is multiples of 3";
	}else{
		cout << sum << " is not multiples of 3, 4 or 5";
	}
	
	return 0;
}