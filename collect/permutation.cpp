#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main()
{

    vector<int> v;
    vector<int> t;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    vector<int>::iterator it;

    set<pair<int, int> > s;

    bool te = false;

    // cout << "start !!  :: " << v[0] << v[1] << v[2] << endl;
    // while (next_permutation(v.begin(), v.end()))
    // {
    //     for (int i = 0; i < 2; i++)
    //     {
    //         cout << "11 :: " << v[0] << v[1] << v[2];
    //     }
    //     cout << endl;
    // }
    pair<int, int> p;

    do
    {
        p.first = v[0];
        p.second = v[1];

        s.insert(p);
    } while (next_permutation(v.begin(), v.end()));
    // bool te = next_permutation(v.begin(), v.end());
    // cout << te << " :: " << v[0] << v[1] << v[2] << endl;
    // te = next_permutation(v.begin(), v.end());
    // cout << te << " :: " << v[0] << v[1] << v[2] << endl;
    // te = next_permutation(v.begin(), v.end());
    // cout << te << " :: " << v[0] << v[1] << v[2] << endl;
    // te = next_permutation(v.begin(), v.end());
    // cout << te << " :: " << v[0] << v[1] << v[2] << endl;
    // te = next_permutation(v.begin(), v.end());
    // cout << te << " :: " << v[0] << v[1] << v[2] << endl;
    // te = next_permutation(v.begin(), v.end());
    // cout << te << " :: " << v[0] << v[1] << v[2] << endl;


    for(auto ss:s){
        cout <<  ss.first  << " " << ss.second<< endl;
    }
    return 0;
}