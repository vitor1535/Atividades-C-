#include <iostream>
#include <string>

using namespace std;

int main ()
{
    int num1, num2;
    int contador = 0;

    cout << "Inicio: " << endl;
    cin >> num1;
    cout << "Final: " << endl;
    cin >> num2;

    if (num1 < num2)
    {
        while (contador <= num2 - num1)
        {
            cout << num1 + contador << endl;
            contador++;
        }
        contador = 0;
    }
    else
    {
        while (contador <= num1 - num2)
        {
            cout << num1 - contador << endl;
            contador++;
        }
        contador = 0;
    }

    system ("pause");
    return 0;
}