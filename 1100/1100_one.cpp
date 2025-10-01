#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int size;
        cin >> size;
        string s;
        cin >> s;
        unordered_set<char> seen;
        int ans = 0;
        for (int j = 0; j < size; j++)
        {
            if (seen.find(s[j]) == seen.end())
            {
                ans += size - j;
                seen.insert(s[j]);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}