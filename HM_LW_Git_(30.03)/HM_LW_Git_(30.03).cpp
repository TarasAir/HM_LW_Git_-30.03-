#include <iostream>
using namespace std;

int AddNumbers(int number1, int number2)
{
    int result = number1 + number2;
    return result;
}

int DiffNumbers(int number1, int number2)
{
    int result = number1 - number2;
    return result;
}

int DivNumbers(int number1, int number2)
{
    int result = number1 / number2;
    return result;
}

int MultNumbers(int number1, int number2)
{
    int result = number1 * number2;
    return result;
}

int main()
{
    int a = 10, b = 5;

    cout << "Сума чисел " << a << " та " << b << " дорівнює: " << AddNumbers(a, b) << endl;
    cout << "Різниця чисел " << a << " та " << b << " дорівнює: " << DiffNumbers(a, b) << endl;
    cout << "Частка чисел " << a << " та " << b << " дорівнює: " << DivNumbers(a, b) << endl;
    cout << "Добуток чисел " << a << " та " << b << " дорівнює: " << MultNumbers(a, b) << endl;
}
