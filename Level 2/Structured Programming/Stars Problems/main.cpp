#include <iostream>
using namespace std;

int main()
{
    for (short i = 1; i <= 5; i++) {
       for (short j = 1; j <= 5; j++)
        cout << '*';

       cout << '\n';
    }

    cout << '\n' << endl;

    for (short i = 1; i <= 5; i++) {
       for (short j = 1; j <= i; j++)
        cout << '*';

       cout << '\n';
    }

    cout << '\n' << endl;

    for (short i = 1; i <= 5; i++) {
       for (short j = 1; j <= i; j++)
        cout << j;

       cout << '\n';
    }

    cout << '\n' << endl;

    short x = 1;

    for (short i = 1; i < 5; i++) {
       for (short j = 1; j <= i; j++)
        cout << x++;

       cout << '\n';
    }

    system("pause > 0");

    return 0;
}
