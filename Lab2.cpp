#include <iostream> // Включає функції
#include <string> // Дає змогу працювати з масивами через string
#include <locale.h> // Включає функцію setlocale

using namespace std; // Дозволяє групувати std, щоб не писати кожен раз 

int main()
{
    setlocale(LC_ALL, "uk_UA"); // Підключає Українську мову

    int N;
    int res;
    int i;

    cout << "Факторіал числа: ";
    cin >> N;

    res = 1;

    for (int i = 1; i <= N; i++)
    {
        res = res * i;
        cout << res << endl;
    }
    return 0;
}
