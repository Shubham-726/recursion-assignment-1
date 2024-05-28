#include <iostream>
using namespace std;
void sum1toNodd(int sum, int i, int n)
{
    if (i > n)
    {
        cout << sum;
        return;
    }
    sum1toNodd(sum + i, i + 2, n);
}
int main()
{
    int a, b;
    cout << "enter the 1st no";
    cin >> a;
    cout << "enter the value of N";
    cin >> b;
    if(a%2==0) a++; //bcz agar even se no suru ho raha toh 2+2 = 4 ho jyega
    sum1toNodd(0, a, b);
}