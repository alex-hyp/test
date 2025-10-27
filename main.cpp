#include <iostream>
#include <vector>
#include <algorithm>
// Comment
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

    vector<int> V = {1, 2, 3, 5, 10};
    print_vect(V);

    int x = 1;
    cout << endl;

    while (x)
    {
        cout << "add: ";
        cin >> x;

        if (x)
        {
            V.push_back(x);
            sort(V.begin(), V.end());
            print_vect(V);
        }
    }

    system("pause");

    return 0;
}

