#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a, b, c;
    int temp, temp1;
    while (n > 0)
    {
        cin >> a >> b >> c;
        if ((a == b) && (b == c))
        {
            cout << "YES" << endl;
            goto vv;
        }
        else if ((a - b) == (b - c))
        {
            cout << "YES" << endl;
            goto vv;
        }
        if (a > 0)
        {
            temp1 = a;
            temp = (2 * b) - c;
            if ((temp % a == 0) && (temp > 0))
            {
                a = temp;
                goto harsh;
            }
            else
            {
                a = temp1;
            }
        }
        if (b > 0)
        {
            temp1 = b;
            temp = a + c;
            if (temp % 2 == 0)
            {
                temp /= 2;
                if ((temp % b == 0))
                {
                    b = temp;
                    goto harsh;
                }
                else
                {
                    b = temp1;
                }
            }
        }
        if (c > 0)
        {
            temp1 = c;
            temp = (2 * b) - a;
            if ((temp % c == 0) && (temp > 0))
            {
                c = temp;
                goto harsh;
            }
            else
            {
                c = temp1;
                goto harsh;
            }
        }
    harsh:
        if ((a - b) == (b - c) && (a > 0 && b > 0 && c > 0))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    vv:
        n--;
    }
    return 0;
}
