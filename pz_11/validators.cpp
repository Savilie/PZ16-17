#include <iostream>
#include "validators.h"
#include <regex>

using namespace std;

string validators::validate(string str) {
	regex re("[�-��-߸�a-zA-Z\\p{P}]*"); // ��������� ����� �������� � ������� �������, ������ ������� ������� ���� �������� � ����������

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