// Min_max number, Patryk Sawicki, Bydgoszcz 10.08.2020

#include <iostream>
#include <string>
#include <vector>

int main()
{
  std::vector <long double> numvector;
  long double number{};
  long double max_number{};
  long double min_number{};

   std::cout << " To finish press any character except numbers. " << std::endl;
   std::cout << " \n Enter numbers: " << std::endl;

   while(1){

       std::cout <<" ";
       std::cin >> number;

       if( std::cin.fail() ){
           std::cout << " It is not number. End of program" << std::endl;
           std::cin.clear();
           std::cin.sync();
           break;
       }

       numvector.push_back(number);

       if (number > max_number) { max_number = number;
       }
       if (static_cast<int>(numvector.size()) == 1 )
       { min_number = numvector[0];
       }
       if (min_number > number) { min_number = number;
       }
   }

  std::cout << " Your numbers: " << std::endl;

  for(int i = 0; i < static_cast<int>(numvector.size()); i++) {
      std::cout << " " << numvector[i] << ",";
  }

  std::cout << " \n Numvector stores " << static_cast<int>(numvector.size()) << " numbers.\n";
  std::cout << " Your max_number is: "<< max_number << std::endl;
  std::cout << " Your min_number is: "<< min_number << std::endl;
  std::cout << std::endl;

  return 0;
}
