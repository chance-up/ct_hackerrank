#include <string>
#include <vector>
#include <iostream>
#include <sstream>

using namespace std;

vector<string> split(string str, char Delimiter)
{
    istringstream iss(str);
    string buffer;
    vector<string> result;

    while (getline(iss, buffer, Delimiter))
    {
        result.push_back(buffer);
    }

    return result;
}

string solution(string s)
{
    string answer = "";
    vector<string> stV = split(s, ' ');

    return answer;
}

int main()
{

    string tempStr = "";
    tempStr.append("11");
    tempStr.append("44");
    cout << tempStr << endl;

    vector<string>::iterator iter;

    vector<string> v(3);
    v[0] = "aa";
    v[1] = "bb";
    v[2] = "cc";

    iter = find(v.begin(), v.end(), "dd");
    cout << *iter << endl;
    // bool tt = find(v.begin(), v.end(), 2);

    return 0;
}