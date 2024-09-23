#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int k;
    int n;
    double P;
    double E;
    // 1 спосіб
    P = 1;
    k = 1;
    while (k <= 25)
    {
        E = 0;
        n=k;
        while (n <= k*k)
        {
            E += 1./n;
            n++;
        }
        P *= (1+E);
        k++;
    }
    cout << P << endl;
    // 2 спосіб
    P = 1;
    k = 1;
    do
    {
        E = 0;
        n = k;
        do {
            E += 1. / n;
            n++;
        } while (n <= k * k);
        P *= (1 + E);
        k++;
    } while (k <= 25);
    cout << P << endl;
    // 3 спосіб
    P = 1;
    for (k = 1; k <= 25; k++)
    {
        E = 0;
        for (n = k;n <= k * k;  n++)
        {
            E += 1. / n;

        }
        P *= (1 + E);
    }
    cout << P << endl;
    // 4 спосіб
    P = 1;
    for (k = 25; k >= 1; k--)
    {
        E = 0;
        for (n = k*k; n >= k; n--)
        {
            E += 1. / n;
        }
        P *= (1 + E);
    }
    cout << P << endl;
    return 0;
}
