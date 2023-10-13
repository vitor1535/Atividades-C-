#include <iostream>
#include <string>

using namespace std;

int main ()
{
    int num1  = 0, num2 = 1, resultado = 0;

    cout << num1 << endl;
    cout << num2 << endl;

    for (int i =0; i < 13; i++)
    {
        resultado = num1 + num2;
        num1 = num2;
        num2 = resultado;
        cout << resultado << endl;
    }

    system ("pause");
    return 0;
}