#include <iostream>
#include <string>

using namespace std;

int main ()
{
    float nota1, nota2, resultado;

    cout << "Insira a primeira nota" << endl;
    cin >> nota1;
    cout << "Insira a segunda nota" << endl;
    cin >> nota2;

    resultado = (nota1 + nota2) / 2;

    if (resultado >= 9.00 && resultado <= 10.00)
    {
        cout << "Media = " << resultado << endl;
        cout << "Nota A";
    }

    else if (resultado <= 8.90 && resultado >= 8.00)
    {
        cout << "Media = " << resultado << endl;
        cout << "Nota B";
    }

    else if (resultado <= 7.90 && resultado >= 7.00)
    {
        cout << "Media = " << resultado << endl;
        cout << "Nota C";
    }

    else if (resultado <= 6.90 && resultado >= 6.00)
    {
        cout << "Media = " << resultado << endl;
        cout << "Nota D";
    }

    else if (resultado <= 5.90 && resultado >= 5.00)
    {
        cout << "Media = " << resultado << endl;
        cout << "Nota E";
    }

    else if (resultado <= 5.00)
    {
        cout << "Media = " << resultado << endl;
        cout << "Nota F";
    }

    system ("pause");
    return 0;
}