/*
* Developed by Lance
* Checking for palindrome numbers
* 13/09/2021
*/
//Pre-processor directives
#include <iostream>
using namespace std;

//The function that returns true if number is palindrome

bool isPalindrome(int num) {
	int before = num;
	int result = 0;
	while (num != 0) {
		result = result*10 + (num % 10);
		num /= 10;
	}
	if (before == result) {
		return true;
	}
	else {
		return false;
	}
}

int main() {
	//Checking whether it actually works
	cout << isPalindrome(121) << endl;
	cout << isPalindrome(100) << endl;
	cout << isPalindrome(00) << endl;
	cout << isPalindrome(102345) << endl;
	cout << isPalindrome(121) << endl;

	//Removing the junk of code at the console
	system("pause>0");
}