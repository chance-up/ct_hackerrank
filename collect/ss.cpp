#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;
int main(){
    
    vector<int> v;
    set<vector<int> > s;
    set<int > ss;
    int a;
    int b;
    
    
    // cin >> a >> b;

    vector<int> tempV;
    tempV.push_back(1);
    tempV.push_back(1);
    s.insert(tempV);

    vector<int> tempV1;
    tempV1.push_back(1);
    tempV1.push_back(1);
    s.insert(tempV1);

    ss.insert(1);
    ss.insert(2);

    for(auto sss : s){
        for(auto ssss:sss){
            cout << ssss << endl;

        }
    }
    


    
    // for(int i=1;i<=a;i++){
    //     v.push_back(i);
    // }
    
    // do{
    //     vector<int> tempV;
    //     for(int i=0;i<b;i++){
    //         tempV.push_back(v[i]);
    //     }
    //     s.insert(tempV);
    // }
    // while(next_permutation(v.begin(),v.end()));
    

    return 0;
}
