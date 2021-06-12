#include <iostream>
using namespace std;
 
int main()
{
    int k, n, w;
    cin >> k >> n >> w;
    int totalCost = 0;
    for (int i = 1; i <= w; i++)
    {
        totalCost += (k * i);
    }
    int borrowDollor = (totalCost - n);
    if (borrowDollor > 0)
    {
        cout << borrowDollor << endl;
    }
    else
    {
        cout << "0";
    }
    return 0;
}