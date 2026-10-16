#include <iostream>
using namespace std;

int calc_fact(int number) {
    int fact = 1;

    for (int i = number; i > 1; i--)
        fact *= i;

    return fact;
}

int main()
{
    int number;
    cout << "Enter a Number: ";
    cin >> number;

    cout << '\n' << calc_fact(number) << endl;

    return 0;
}
