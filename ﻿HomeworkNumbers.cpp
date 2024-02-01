#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    int a, b, c = 0;
    bool h = 1;
    cout << "Введите диапозон\n";
    cin >> a >> b;
    if (a > b)swap(a, b);
    for (int i = a; i <= b; i++) {
        h = 1;
        for (int j = 2; i > j; j++) {
            if (i % j == 0) {
                h = 0;
                break;
            }
        }
        if (h == 1)c++;
    }
    cout << "В диапозоне " << c << " простых значений";
}