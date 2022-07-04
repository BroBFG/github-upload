#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;



int main() {
	setlocale(LC_ALL, "Russian");
	freopen("input.txt", "r", stdin);
	string s;
	getline(cin, s);
	cout << s << '\n';


}