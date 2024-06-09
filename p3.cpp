#include <bits/stdc++.h>
using namespace std;

void solve(string s)
{
    long long n = s.size();
    long long check = s[0];
    int  c = 1;
    int longest = 1;
    for (long long i = 1; i < n; i++)
    {
        if (s[i] == check)
        {
            c++;
        }
        else
        {
            c = 1;
            check = s[i];
        }
        longest = max(longest, c);
    }
    cout << longest << endl;
}
int main()
{
    string s;
    cin >> s;
    solve(s);
}