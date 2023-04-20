#include <iostream>

int main() {
   std::string name;
   std::cin >> name;

   try {
      if (name.length() >= 4 && name.length() <= 20)
      {
         std::cout << "Valid";
      }
      else
      {
         throw std::string("Invalid");
      }
   }
   catch (std::string err)
   {
      std::cout << err;
   }

   return 0;
}