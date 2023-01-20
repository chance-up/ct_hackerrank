#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    vector<int> v;

    v.push_back(256741038);
    v.push_back(623958417);
    v.push_back(467905213);
    v.push_back(714532089);
    v.push_back(938071625);

    sort(v.begin(), v.end());

    vector<int>::iterator it = v.begin();

    long long min = 0;
    long long max = 0;

    min += *it;
    it++;

    min += *it;
    max += *it;
    it++;

    min += *it;
    max += *it;
    it++;

    min += *it;
    max += *it;
    it++;

    max += *it;
    it++;

    cout << min << " " << max;

    return 0;
}