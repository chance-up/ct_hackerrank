#include <iostream>
#include <sstream>
#include <typeinfo>

using namespace std;

int main()
{
    int num;
    string s;
    string s1;
    s = "07:05:45PM";

    char c = s[s.length() - 2];
    string sH = s.substr(0, 2);
    string sOther = s.substr(2, 6);

    int nH = 0;

    if (c == 'A')
    {
        if (sH == "12")
        {
            sH = "00";
        }
    }
    else
    {
        nH = stoi(sH);
        nH += 12;
        if (nH == 24)
        {
            sH = "12";
        }
        else
        {
            sH = to_string(nH);
        }
    }

    string newTime = sH + sOther;
    cout << newTime << endl;

    string newTime1 = "";

    newTime1.append(sH);

    cout << newTime1 << endl;

    // string new1 = s.substr(s.length() - 2);
    // string new2 = s.substr(0, s.length() - 2);

    // istringstream iss(new2);
    // string hh = "";
    // string mm = "";
    // string ss = "";

    // iss >> hh;
    // iss >> mm;
    // iss >> ss;

    // while (getline(ss, s1, ':'))
    // {
    //     cout << s1 << endl;
    // }

    // ss >> s1;
    // cout << s1 << endl;

    // ss >> s1;
    // cout << s1 << endl;

    // ss >> s1;
    // cout << s1 << endl;

    return 0;
}