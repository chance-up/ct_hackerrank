#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;

bool isUpperCase(char c)
{
    if (c >= 'A' && c <= 'Z')
        return true;
    return false;
}

string splitByUpperCase(string s)
{
    vector<char> v;
    for (int i = 0; i < s.size(); i++)
    {
        if (isUpperCase(s[i]))
        {
            v.push_back(' ');
            v.push_back(tolower(s[i]));
        }
        else
        {
            v.push_back(s[i]);
        }
    }
    string r(v.begin(), v.end());
    return r;
}

string combineBasedSpacing(string s)
{
    vector<char> v;
    bool jump = false;
    for (int i = 0; i < s.size(); i++)
    {
        if (jump)
        {
            v.push_back(toupper(s[i]));
            jump = false;
            continue;
        }

        if (s[i] == ' ')
        {
            jump = true;
            continue;
        }
        else
        {
            v.push_back(s[i]);
        }
    }
    string r(v.begin(), v.end());
    return r;
}

vector<string> convertSplitCombile(vector<string> sc)
{
    vector<string> operResultVector;

    for (int i = 0; i < sc.size(); i++)
    {
        string tempstr = "";
        if ((int)sc[i][sc[i].size() - 1] == 13)
        {
            tempstr = sc[i].erase(sc[i].size() - 1);
        }
        else
        {
            tempstr = sc[i];
        }
        stringstream temp(tempstr);
        vector<string> oneLine;
        string inputStr;
        while (getline(temp, inputStr, ';'))
        {
            oneLine.push_back(inputStr);
        }

        string oper = oneLine[0];
        string indi = oneLine[1];
        string str = oneLine[2];

        string tempOperStr;
        vector<char> tempOperVector;
        string operResult;
        if (oper == "S")
        {
            if (indi == "M")
            {
                tempOperStr = str.erase(str.size() - 2);
            }
            else if (indi == "V")
            {
                tempOperStr = str;
            }
            else
            {
                tempOperStr = str;
                tempOperStr[0] = tolower(tempOperStr[0]);
            }
            operResult = splitByUpperCase(tempOperStr);
        }
        else
        {
            operResult = combineBasedSpacing(str);
            if (indi == "M")
            {
                operResult = operResult + "()";
            }
            else if (indi == "V")
            {
                operResult = operResult;
            }
            else
            {
                operResult[0] = toupper(operResult[0]);
            }
        }

        operResultVector.push_back(operResult);
    }

    for (int i = 0; i < operResultVector.size(); i++)
    {
        cout << operResultVector[i] << endl;
    }
    return sc;
}

int main()
{
    string str = "";
    vector<string> sc;
    while (!cin.eof())
    {
        getline(cin, str);
        sc.push_back(str);
    }

    convertSplitCombile(sc);

    return 0;
}
