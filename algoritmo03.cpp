#include <iostream>
#include <string>

using namespace std;

int main ()
{
    int num1;
    int num2;
    int resultado;

    cout << "Digite um numero" << endl;
    cin  >> num1; 

    cout << "Digite outro numero" << endl;
    cin  >> num2; 

    resultado = num1 + num2;

    cout << "A soma entre " << num1 << " e " << num2 << " eh igual a " << resultado << endl;

    system ("pause");
    return 0;
}