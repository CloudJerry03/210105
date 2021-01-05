#include <iostream>
using namespace std;

int main()
{
    int n, cnt = 0;
    cin >> n;

    while (n > 0)
    {
        cnt++;
        n -= cnt;
    }

    if (cnt % 2 == 0)
        cout << cnt + n << "/" << 1 + (-n);
    else
        cout << 1 + (-n) << "/" << cnt + n;

    return 0;
}
