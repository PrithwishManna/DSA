#include<bits/stdc++.h>
using namespace std;

int main(){
    // stock prices
    vector<int> price = {100, 67, 56, 70, 60, 85, 95};

    // solution
    vector<int> ans(price.size(), 0);
    stack<int> s;

    for(int i=0; i<price.size(); i++){
        while(s.size() > 0 && price[s.top()] <= price[i]){
            s.pop();
        }

        if(s.empty()){
            ans[i] = i + 1;
        } else{
            ans[i] = i - s.top();   // i - prev-high
        }

        s.push(i);
    }

    // Print answer values
    for(int val : ans){
        cout << val << " ";
    }



    return 0;
}