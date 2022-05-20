#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int N;

    cin>>N;
    vector<short> Anumber(N),Bnumber(N);

    for (int i = 0; i < N; ++i)
        cin>>Anumber[i];
    for (int i = 0; i < N; ++i)
        cin>>Bnumber[i];

    sort(Anumber.begin(), Anumber.end());
    sort(Bnumber.begin(), Bnumber.end());

    int result=0;
    for (int i = 0; i < N; ++i)
        result+=Anumber[i]*Bnumber[Bnumber.size()-1-i];

    cout<<result;
    return 0;
}