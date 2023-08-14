#include <string>
#include <vector>
#include <unordered_map>
#include <iostream>

using namespace std;

int main()
{
    vector<int> answer;
    unordered_map<char, int> m;
    if (m['A'] >= 0)
    {
        cout << "tt" << endl;
    }
    else
    {
        cout << "ff" << endl;
    }

    return 0;
}

vector<int> solution(vector<int> sequence, int k) {
    vector<int> answer;
    int startIdx = 0;
    int endIdx = 0;
    
    int sum = 0;
    vector<vector<int>> idxs;
    while(startIdx<sequence.size()){
        vector<int> tempV;
        // if(sequence[endIdx]>k){
        //     break;
        // }else if()
        
        sum += sequence[endIdx];
        // cout << sum << endl;
        
        
        if(sum<k){
            endIdx++;
            if(endIdx==sequence.size()){
                // cout << "not anymore" << endl;
                break;
            }
        }else if(sum==k){
            tempV.push_back(startIdx);
            tempV.push_back(endIdx);
            // cout << "corr!" << startIdx << endIdx << endl;
            if(idxs.size()!=0){
                if(idxs[0][1] - idxs[0][0] >endIdx-startIdx){
                    // idxs.push_back(tempV);
                    idxs[0][0]=startIdx;
                    idxs[0][1]=endIdx;
                }
            }else{
                idxs.push_back(tempV);
            }
            startIdx++;
            endIdx = startIdx;
            sum=0;
        }else if(sum>k){
            // cout << "over!" << startIdx << endIdx << endl;
            startIdx++;
            endIdx = startIdx;
            sum=0;
        }
    }
    
    return idxs[0];
}

댓값 〉	[6, 6]
실행 결과 〉	테스트를 통과하였습니다.
출력 〉	right Move!00
right Move!01
right Move!02
corr!03
left Move!03
right Move!13
left Move!14
left Move!24
corr!34
left Move!34
right Move!44
left Move!45
right Move!55
left Move!56
corr!66
left Move!66
테스트 3