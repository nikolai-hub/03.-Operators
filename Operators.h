#ifndef OPERATORS_H
#define OPERATORS_H

#include <ostream>
#include <vector>
#include <string>
#include <sstream>

typedef std::vector<std::string> strVec;

strVec& operator<<(strVec& first, std::string& second) {
	first.push_back(second);
	return first;
}

std::ostream& operator<< (std::ostream& first, const strVec& second) {
	for (auto s : second) {
		first << s << std::endl;
	}
	return first;
}

std::string operator+(std::string& first, int second) {
	std::ostringstream ostr;
	ostr << first << second;
	return ostr.str();
}


#endif // !OPERATORS_H#pragma once
