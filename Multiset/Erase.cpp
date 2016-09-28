#include<bits/stdc++.h>

//#include<cstdio>
//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<cstring>
//#include<cmath>
//#include<map>

using namespace std;

#define fast ios_base::sync_with_stdio(false)
#define bfast cin.tie(0)
#define outs(x) cout << x << " "
#define outn(x) cout << x << "\n"
#define sf scanf
#define pf printf

typedef long long LL;
typedef vector<int>vii;
typedef vector<LL>vll;

int main()
{
    multiset<int>mset;
    multiset<int>::iterator it;
    while(true)
    {
        for(int i=1; i<=5; i++)
        {
            int x;
            cin >> x;
            mset.insert(x);
        }

        mset.erase(mset.find(40));

        for(it=mset.begin() ; it != mset.end() ; ++it) cout << *it << " ";
        cout << "\n" << mset.size() << "\n";

        mset.erase(mset.find(50) , mset.end()); // 50 theke shesh porzonto sob erase korbe

         for(it=mset.begin() ; it != mset.end() ; ++it) cout << *it << " ";
        cout << "\n" << mset.size() << "\n";
    }

    return 0;
}
