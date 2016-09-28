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
    map<int , multiset<int> >mmset;
   multiset<int>::iterator it;
   multiset<int>::iterator it1;
   int ar[10];
    while(true)
    {
        for(int i=0; i<6; i++)
        {
            int x;
            cin >> x;
            ar[i] = x;

            mmset[ar[i] % 10].insert(ar[i]);
        }

        for(int i=0; i<6; i++)
        {
            it = mmset[ar[i] % 10].find(ar[i]);

            it1 = mmset[ar[i] %10].end();

            cout << *it << " " << *it1 << "; ";
        }
    }
}


//int main()
//{
//    map<int, int>mpii;
//    multiset<int>mset;
//    multiset<int>::iterator mit;
//    set<int>st;
//    set<int>::iterator it;
//    while(true)
//    {
//        mpii.clear();
//        st.clear();
//        mset.clear();
//
//        for(int i=0; i<5; i++)
//        {
//            int x;
//            cin >> x;
//
//            if(mpii.count(x) == 0)
//            {
//                st.insert(x);
//                mpii[x]= 1;
//                mset.insert(x);
//            }
//
//            else mset.insert(x);
//        }
//
//        for(it=st.begin(); it!=st.end(); it++)
//        {
//            cout << *it << " appears " << mset.count(*it);
//
//            if(mset.count(*it > 1)) cout << " times\n";
//            else cout << " time\n";
//        }
//    }
//
//    return 0;
//}
