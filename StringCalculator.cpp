#include "StringCalculator.h"
int StringCalculator :: add(string str)
{
  uint sum =0;
  if(str.empty() || str == "0")
  {
    return 0;
  }
  else
  {
    sum = sumIntegersInString(str);
    return ;
  }
}

int StringCalculator :: sumIntegersInString(string str)
{
   int sum = 0;
    std::istringstream ss(str);
    std::string token;

    while (getline(str, token, ',')) { // Split by any delimiter (here: ',')
        std::istringstream tokenStream(token);
        std::string numStr;

        while (tokenStream >> numStr) { // Split by whitespace (including spaces, tabs, newlines)
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
