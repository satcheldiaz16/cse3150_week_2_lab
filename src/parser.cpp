#include <iostream>
#include "parser.h"
#include <string>

using std::string;

namespace StringUtils{
	void parseName(const string& fullName, string* firstName, string* lastName){
		int indexOfSpace = fullName.find(' ');
		*firstName = fullName.substr(0, indexOfSpace);
		*lastName = fullName.substr(indexOfSpace + 1);
	}
	string getUsername(const string& email){
		return email.substr(0, email.find('@'));
	}
}
