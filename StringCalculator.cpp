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
    cout << "Sum is " << sum << endl;
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
             res += checkForNumbers(numStr);
            cout << "res is " << res << endl;
        }
    }
    cout << "ret res is " << res << endl;
    return res;
}

int StringCalculator :: checkForNumbers(const std::string& str) {
        if (isValidNumber(str)) {
            int number = std::stoi(str);
            if (number < 0) {
                throw std::runtime_error("Negative number found: " + str);
            }
            return number;
        }
        return 0;
    }

 bool StringCalculator :: isValidNumber(const std::string& str) {
        bool isNumber = true;
        for (char c : str) {
            if (!std::isdigit(c)) {
                 return false;
            }
        }
        return true;
    }
