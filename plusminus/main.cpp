#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

string ltrim(const string &);
string rtrim(const string &);

int main()
{
    // string n_temp;
    // getline(cin, n_temp);

    int num = 6;
    vector<int> v;
    v.push_back(-4);
    v.push_back(3);
    v.push_back(-9);
    v.push_back(4);
    v.push_back(1);

    int negative = 0;
    int positive = 0;
    int zero = 0;

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] < 0)
        {
            negative++;
        }
        else if (v[i] > 0)
        {
            positive++;
        }
        else
        {
            zero++;
        }
    }

    cout.setf(ios::fixed);
    cout.precision(6);

    cout << ((double)positive / v.size()) << endl;
    cout << ((double)negative / v.size()) << endl;
    cout << ((double)zero / v.size()) << endl;
    cout.unsetf(ios::fixed);

    return 0;
}
