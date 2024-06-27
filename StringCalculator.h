#include <iostream>
#include <string>
#include <sstream>
#include <cctype>
using namespace std;

class StringCalculator {
private:
 int sumIntegersInString(const std::string& str);
public:
int add(const std::string& str);
int checkforDigit_Sum(const std::string& str);
};
