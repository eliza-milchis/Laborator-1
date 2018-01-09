#include <iostream>
using namespace std;
int main()
{
int nr;
cout << "Introduceti un numar intreg: ";
cin >> nr;
if (nr > 89 && nr < 101)
    cout << "In interval.";
else
    cout << "In afara intervalului.";
return 0;

}

