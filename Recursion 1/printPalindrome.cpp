// 1234321
#include <iostream>
using namespace std;
void palindrome(int i, int n)
{
    if (i == n)
    {
        cout << i;
        return;
    }
    cout << i;
    palindrome(i + 1, n);
    cout << i;
}

int main()
{
    int n;
    cout << "Enter n";
    cin >> n;
    palindrome(1, n);
}