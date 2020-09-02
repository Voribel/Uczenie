#include <iostream>
#include <limits>
#include <string>

void wczytajOsobe(std::string &name, std::string &surname, int &age);
void wypiszOsobe(std::string &name, std::string &surname, int &age);
int main()
{
    std::string imie[ 2 ];
    std::string nazwisko[ 2 ];
    int wiek[ 2 ];
    for( int i = 0; i < 2; i++ )
        wczytajOsobe( imie[ i ], nazwisko[ i ], wiek[ i ] );

    for( int i = 0; i < 2; i++ )
        wypiszOsobe( imie[ i ], nazwisko[ i ], wiek[ i ] );

    return 0;
}
void wczytajOsobe(std::string &name, std::string &surname,int &age){
    std::cout << "Podaj imie: ";
    std::getline(std::cin , name);
    std::cin.ignore();
    std::cout << "Podaj Nazwisko: ";
    std::getline(std::cin , surname);
    std::cin.ignore();
    std::cout << "Podaj wiek: ";
    std::cin >> age;
    std::cin.ignore();
};
void wypiszOsobe(std::string &name,std::string &surname,int &age){
    std::cout <<"Your name: " <<  name << " ";
    std::cout <<"Your surname: " << surname << " ";
    std::cout <<"Your age : " << age << "\n";

}