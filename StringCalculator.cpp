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
    int res = 0;
    std::istringstream ss(str);
    std::string token;

    while (std::getline(ss, token, ',')) { // Split by comma
        std::istringstream tokenStream(token);
        std::string numStr;

        while (tokenStream >> numStr) { // Split by whitespace
            int res = checkforDigit_Sum(numstr);
        }
    }

    return res;
}

int StringCalculator :: checkforDigit_Sum(const std::string& str)
{
   bool isValidNumber = true;
    int sum = 0;
   for (char c : str)
   {
        if (!std::isdigit(c)) 
         {
           isValidNumber = false;
           break;
         }
    }
   if (isValidNumber) 
   {
     sum += std::stoi(str);
   }
   return sum;
}
