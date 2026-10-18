// Lab 2 Alaj.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
/* zad.9
   int n;
   cout << "podaj n";
   cin >> n;
   if (n == 0)
   {
       cout << "n nie moze byc rowne 0";
   }
   for (int i = 0;i <= 100;i++)
   {
       if (i % n == 0)
           cout << i << endl;
   }
   int n,x;
   cout << "podaj n";
   cin >> n;

   for (int i = 0;i <= 100;i++)
   {
       if (i % n == 0)
           x++;
   }
   cout << "liczba liczb podzielnych przez 0:" << x << endl;

{
   int a, b;

   cout << "Podaj a: ";
   cin >> a;

   cout << "Podaj b: ";
   cin >> b;

   if (a < b)
   {
    for (int i = a; i <= b; i++)
    {
    if (i % 3 == 0)
    {
      cout << i << " ";
    }
    }
   }
   else
   {
    for (int i = b; i <= a; i++)
    {
        if (i % 3 == 0)
        {
            cout << i << " ";
        }
    }
   }


}
    int n;
     double liczba, suma = 0, srednia;
{
    cout << "Podaj liczbe n : ";
    cin >> n;



    for (int i = 1; i <= n; i++)
    {
        cout << "Podaj liczbe : ";
        cin >> liczba;
        suma += liczba;
    }

    srednia = suma / n;

    cout << "Srednia arytmetyczna wynosi : " << srednia;
}

{
    for (int i = 100; i >= 0; i--)
    {
        cout << i << endl;
    }
}*/
{
    int a, b, c;

    cout << "Podaj trzy liczby calkowite: ";
    cin >> a >> b >> c;

    int najmniejsza = a;

    if (b < najmniejsza) 
    {
        najmniejsza = b;
    }

    if (c < najmniejsza) 
    {
        najmniejsza = c;
    }

    cout << "Najmniejsza liczba to: " << najmniejsza;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
