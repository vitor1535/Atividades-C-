#include <iostream>
#include <string>

using namespace std;

int main ()
{
    float num1, num2, num3, num4;

    cout << "Qual o valor do emprestimo?" << endl;
    cin >> num1;
    cout << "Quantas parcelas?" << endl;
    cin >> num2;

    num3 = num1 * 1.2;
    num4 = num3 / num2;

    cout << "O valor total será de " << num3 << " e em " << num2 << " parcelas da o total de " << num4 << " por parcela.";

    system ("pause");
    return 0;
}