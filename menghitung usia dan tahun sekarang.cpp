#include <iostream>
#include <conio.h>
using namespace std;
main (void)

{
 int tahun, umur;
 char lagi;
 
 mulai :
  cout << "\nMasukan tahun kelahiranmu = ";
  cin >> tahun;
  umur = 2016 - tahun;
  cout << "Umurrmu " << umur << " tahun\n";
  cout << "Mau hitung lagi [Y/T] ";
 
 lagi = getch();
 
 if (lagi == 'Y' || lagi == 'y')
 {
  cout << "\n";
  goto mulai;
 }
  if (lagi == 'T' || lagi == 't')
  {
   getch();
   cout << "\nTERIMA KASIH";
  }
}
