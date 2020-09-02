#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<int> numbers;
    std::vector<char> characters;

    std::cout << "Type in your calculations " << std::endl;
    std::string strNumber = "";
    std::getline(std::cin, strNumber);
    for (int i = 0; i < strNumber.length(); i++) {
        char znak = strNumber[i];
        int tnum = 0;
        while (znak >= '0' && znak <= '9') {
            tnum = (tnum * 10) + (znak - '0');
            i++;
            znak = strNumber[i];
        }
        characters.push_back(znak);
        numbers.push_back(tnum);

        float wynik = numbers.at(0);
        for(int i = 0; i < (numbers.size()-1); i++) {
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
        }
        std::cout << wynik;
    }
}