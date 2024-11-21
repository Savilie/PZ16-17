#include <iostream>
#include "validators.h"
#include <regex>

using namespace std;

string validators::validate(string str) {
	regex re("[а-яА-ЯёЁa-zA-Z\\p{P}]*"); // Навереное самое понятное и простое решение, другие которые находил были страшные и непонятные

	if (regex_match(str, re)) {
		return str;
	}
	else {
		cout << "Error: Invalid data was given!" << endl;
		return "-";
	}
}

int validators::validate(int num) {
	if (num < 0) {
		cout << "Error: Invalid data was given!" << endl;
		return 0;
	}
	return num;
}
double validators::validate(double num) {
	if (num < 0) {
		cout << "Error: Invalid data was given!" << endl;
		return 0;
	}
	return num;
}