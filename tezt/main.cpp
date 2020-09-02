#include <iostream>
#include <vector>

int main() {
    std::string mathOperations;
    std::vector<int> numbers;
    std::vector<char> characters;
    std::cout << "Type your operations: ";
    getline(std::cin, mathOperations);
    for (int i = 0; i < mathOperations.length(); i++) {
        char znak = mathOperations[i];
        int tnum = 0;
            if (!isdigit(znak)) {
                std::cout
                        << "Co Ty sobie wyobrażasz człowieku? Masz Ty szacunek i godność człowieka? Dlaczego wpisujesz litery w kalkulator?";
                break;
            }
        if (znak == '(') {
            while (znak != ')') {}
            }
            float wynik = (numbers.at(0));
            for (int i = 0; i < (numbers.size() - 1); i++) {
                switch (characters.at(i)) {
                    case '+':
                        wynik += numbers[i + 1];
                        break;
                    case '-':
                        wynik = wynik - numbers[i + 1];
                        break;
                    case '*':
                        wynik = wynik * numbers[i + 1];
                        break;
                    case '/':
                        wynik = wynik / numbers[i + 1];
                        break;
                }
            }
        std::cout << wynik;
    }
}