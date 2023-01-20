#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // 9
    // 10 5 20 20 4 5 2 25 1
    int n = 9;

    vector<int> scores;

    scores.push_back(10);
    scores.push_back(5);
    scores.push_back(20);
    scores.push_back(20);
    scores.push_back(4);
    scores.push_back(5);
    scores.push_back(2);
    scores.push_back(25);
    scores.push_back(1);

    int min = 0;
    int minCnt = 0;
    int max = 0;
    int maxCnt = 0;
    min = scores[0];
    max = scores[0];
    for (int i = 1; i < scores.size(); i++)
    {
        if (scores[i] < min)
        {
            min = scores[i];
            minCnt++;
            continue;
        }

        if (scores[i] > max)
        {
            max = scores[i];
            maxCnt++;
            continue;
        }
    }

    cout << minCnt << maxCnt << endl;

    return 0;
}