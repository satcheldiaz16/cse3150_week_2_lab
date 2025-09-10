#include <iostream>
#include "parser.h"
#include <string>

using std::string, std::cout, std::cin, std::endl, std::getline;
using StringUtils::parseName, StringUtils::getUsername;

int main(){
	cout << "Enter full name and email address on seperate lines. " << endl;
	string full_name;
	string email;
       	getline(cin, full_name);
	getline(cin, email);
	string* first = new string;
	string* last = new string;
	StringUtils::parseName(full_name, first, last);
	email = StringUtils::getUsername(email);
	cout << "First Name: " << *first << ", Last Name: " << *last << ", Username: " << email << endl;
	delete first;
	delete last;
	return 0;
}
