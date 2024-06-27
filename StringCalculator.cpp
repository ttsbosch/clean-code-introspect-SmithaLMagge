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
    sum = sumIntegersInString(str);
    return sum;
  }
}

int StringCalculator :: sumIntegersInString(const std::string& str) {
    int sum = 0;
    std::istringstream ss(str);
    std::string token;

    while (std::getline(ss, token, ',')) { // Split by comma
        std::istringstream tokenStream(token);
        std::string numStr;

        while (tokenStream >> numStr) { // Split by whitespace
            bool isValidNumber = true;
            for (char c : numStr) {
                if (!std::isdigit(c)) {
                    isValidNumber = false;
                    break;
                }
            }
            if (isValidNumber) {
                sum += std::stoi(numStr);
            }
        }
    }

    return sum;
}
