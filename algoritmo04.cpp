#include <iostream>
#include <string>

using namespace std;

int main ()
{
    int num1, num2, num3, tri;

    cout << "Insira um lado do triangulo" << endl;
    cin >> num1;
    cout << "Insira um lado do triangulo" << endl;
    cin >> num2;
    cout << "Insira um lado do triangulo" << endl;
    cin >> num3;

    tri = (num1 < num2 + num3) && (num2 < num3 + num1) && (num3 < num1 + num2);

    cout << tri << endl;

    system ("pause");
    return 0;
}