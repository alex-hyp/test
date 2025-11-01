#include <iostream>
#include <vector>
#include <algorithm>
#include <windows.h>

// Удалил комменты
using namespace std;

class TestClass
{

public:
    int x;
    char c;
};

void print_vect(vector<int> &vin)
{

    for (auto i : vin)
    {

        cout << i << endl;
    }
    cout << endl;
}

int main()
{

    // Кириллица
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    vector<int> V = {1, 2, 3, 5, 10};
    
    int x = 1;
    cout << endl
         << "Начальный вектор: " << endl;
    print_vect(V);
    while (x)
    {
        cout << "Добавить число (\"0\", чтобы закончить): ";
        cin >> x;
        cout << endl;

        if (x)
        {
            V.push_back(x);
            sort(V.begin(), V.end());
            print_vect(V);
            cout << endl;
        }
    }

    system("pause");

    return 0;
}
