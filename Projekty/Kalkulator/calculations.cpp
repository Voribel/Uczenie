//functions
#include <iostream>
#include <vector>
#include <string>
#include "calculations.h"


std::pair<std::vector<int>, std::vector<char>> parseInput(std::string mathOperations){
    std::vector<int> numbers;
    std::vector<char> characters;

    for (int i = 0; i < mathOperations.length(); i++) {
        char znak = mathOperations[i];
        int tnum = 0;
        if (isdigit(znak)) {
            while (znak >= '0' && znak <= '9') {
                tnum = (tnum * 10) + (znak - '0');
                i++;
                znak = mathOperations[i];
            }
            characters.push_back(znak);
            numbers.push_back(tnum);
        } else {
            std::cout
                    << "Co Ty sobie wyobrażasz człowieku? Masz Ty szacunek i godność człowieka? Dlaczego wpisujesz litery w kalkulator?";
            break;
        }
    }
    return std::make_pair (numbers, characters);
}
void calculate(std::string mO){

    std::pair <std::vector<int> ,std::vector<char>> para = parseInput(mO);
    std::vector<int> numbers = para.first;
    std::vector<char> characters = para.second;

    for(int i = 0; i < (numbers.size()-1); i++) {
      	Operations(numbers , characters, i);
    }
}
void Operations(std::vector<int> numbers , std::vector<char> characters, int i){
  float wynik = (numbers.at(0));
  switch(characters.at(i)) {
	case '+':
	  wynik += numbers[i+1];
	  break;
	case '-':
	  wynik = wynik - numbers[i+1];
	  break;
	case '*':
	  wynik = wynik * numbers[i+1];
	  break;
	case '/':
	  wynik = wynik / numbers[i+1];
	  break;
  }
  	std::cout << wynik;
};