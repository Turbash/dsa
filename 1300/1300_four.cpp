#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        vector<int> arr(num);
        map<int, int> mp;
        for (int j = 0; j < num; j++)
        {
            cin >> arr[j];
        }
        for (int i = 0; i < num; i++) {
			for (int j = 2; j * j <= arr[i]; j++) {
				while (arr[i] % j == 0) {
					mp[j]++;
					arr[i] /= j;
				}
			}
			if (arr[i] > 1) {
				mp[arr[i]]++;
			}
		}

        int flag = 1; 
        for (auto it : mp)
        { 
            if (it.second % num != 0)
            {             
                flag = 0;
                break;
            }
        }

        if (flag)
        {
            cout << "YES" << endl; 
        }
        else
        {
            cout << "NO" << endl; 
        }
    }
    return 0;
}