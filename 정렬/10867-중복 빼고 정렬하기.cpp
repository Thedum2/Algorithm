#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    int N;
    cin>>N;

    vector<int> numberVec;

    int num;
    for (int i = 0; i < N; ++i){
        cin>>num;
        numberVec.push_back(num);
    }
    
    //탐색을 위해 정렬
    std::sort(numberVec.begin(), numberVec.end());

    vector<int> newNumArray;
    //이전 값과 같이 않다면 새로운 벡터에 넣어준다.
    for (int i = 0; i <numberVec.size()-1; ++i)
        if(numberVec[i]!=numberVec[i+1])
            newNumArray.push_back(numberVec[i]);
    
    //맨 마지막 값은 들어가지 않으므로 push
    newNumArray.push_back(numberVec[N-1]);

    //출력
    for(auto i:newNumArray)
        cout<<i<<" ";


    return 0;
}