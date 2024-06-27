#include <iostream>
#include <string>
#include <sstream>
#include <cctype>
using namespace std;

class StringCalculator {
private:
 int splitStringcheckforDelimiter(const std::string& str);
 int checkfornumbers(const std::string& str);
 int checkForNumbers(const std::string& str);
 int bool isValidNumber(const std::string& str);
public:
int add(const std::string& str);
};
