#include<iostream>
using namespace std;

bool ispalindrome(int x)
{
    int n = x;
    int sum = 0;
    int r = 0;
    for (int i=0; n > 0;i++)
    {
        r = n % 10;
        sum = sum*10 + r;
        n = n / 10;
    }
    if(sum==x)
    {
        return 1;
    }
    else
    {
    return 0;
    }
}
int main()
{
    int x=-121;
    if(ispalindrome(x))
    {
        cout << x << " Is A Palindrome";
    }
    else
    {
        cout << x << " Is Not A Palindrome";
    }
    return 0;
    system("pause>nul");
}