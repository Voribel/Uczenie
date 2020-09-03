#include <iostream>
#include <string>
#include <math.h>

using namespace std;

string Konwersja_z_10_na_dowolny(int liczba, int system);
int Schemat_Hornera(string liczba, int system);

int main()
{
  //Wybór programu
  int Wybor_programu;
  cout << "Wpisz 1 aby wybrac Konwersje z systemu dziesietnego na dowolny\n wpisz 2 aby wybrac Schemat Hornera: ";
  cin >> Wybor_programu;
  int System;
  switch( Wybor_programu ) {
	case 1:{
	  int Liczba;
	  string Konwersja = "";
	  //Wprowadzenie liczby przez uzytkownika
	  cout << "Wprowadz liczbe, ktora chcesz przekonwertowac: ";
	  cin >> Liczba;
	  //Wprowadzenie systemu na ktory liczba ma zostac przekonwertowana
	  cout << "Wprowadz system na ktory chcesz przekonwertowac te liczbe: ";
	  cin >> System;
	  //Dzialanie funkcji
	  Konwersja = Konwersja_z_10_na_dowolny(Liczba, System);
	  //Wynik programu
	  cout << "Twoja liczba w systemie " << System << " wynosi: " << Konwersja << endl;
	  return 0;
  }

	case 2: {
	  string Liczba_horner ="";
	  int System_horner = 0;
	  //Wprowadzenie liczby przez uzytkownika
	  cout << "Wprowadz liczbe, ktora chcesz przekonwertowac: ";
	  cin >> Liczba_horner;
	  //Wprowadzenie systemu na ktory liczba ma zostac przekonwertowana
	  cout << "Wprowadz system na ktory chcesz przekonwertowac te liczbe: ";
	  cin >> System_horner;
	  //Dzialanie funkcji
	  int Konwersja_Horner = Schemat_Hornera(Liczba_horner, System_horner);
	  //Wynik programu
	  cout << "Twoja liczba po konwersji z systemu " << System << " na 10 wynosi: " << Konwersja_Horner << endl;
	  return 0;
	}
  }
}

string Konwersja_z_10_na_dowolny(int liczba, int system)
{
  int Reszta;
  string Konwersja = "";
  //Konwersja
  while(liczba!=0)
  {
	Reszta = liczba % system;
	if ( Reszta < 9)
	{
	  Konwersja = ( char(Reszta + 48 ) + Konwersja );
	}
	else
	{
	  Konwersja = ( char(Reszta + 55 ) + Konwersja );
	}
	liczba = liczba / system;
  }
  return Konwersja;
}

int Schemat_Hornera(string liczba, int system)
{
  int Horner = 0;
  for(int i = 0; i < liczba.size() ; i++)
  {
	if (liczba[i] < 65)
	{
	  Horner = Horner * system + ( ( (int)liczba[i] ) - 48 );
	}
	else
	{
	  Horner = Horner * system + ( ( (int)liczba[i] ) - 55 );
	}
  }
  return Horner;
}