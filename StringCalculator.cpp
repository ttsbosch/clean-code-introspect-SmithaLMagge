#include "StringCalculator.h"
int StringCalculator :: add(const std::string& str)
{
  uint sum =0;
  if(str.empty() || str == "0")
  {
    return 0;
  }
  else
  {
    sum = splitStringcheckforDelimiter(str);
    return sum;
  }
}

int StringCalculator :: splitStringcheckforDelimiter(const std::string& str) {
    int res = 0;
    std::istringstream ss(str);
    std::string token;

    while (std::getline(ss, token, ',')) { // Split by comma
        std::istringstream tokenStream(token);
        std::string numStr;

        while (tokenStream >> numStr) { // Split by whitespace
            int res = checkfornumbers(numStr);
        }
    }

    return res;
}

int StringCalculator :: checkForNumbers(const std::string& str) {
     bool isValidNumber = true;
        if (isValidNumber(str)) {
            return std::stoi(str);
        }
        return 0;
    }

 bool StringCalculator :: isValidNumber(const std::string& str) {
        for (char c : str) {
            if (!std::isdigit(c)) {
                return false;
            }
        }
        return true;
    }
