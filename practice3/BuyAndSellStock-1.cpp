#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int bestTimeToBuyANdsellStock(vector<int> &prices){
    int maxDiff = INT_MIN;
        for(int i=0; i<prices.size()-1; i++){
            for(int j=i+1; j<prices.size(); j++){
                maxDiff = max(maxDiff, prices[j] - prices[i]);
            }
        }
        if(maxDiff > 0)
            return maxDiff;
        else
            return 0;
}

int main(){
    vector<int> prices;

    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        prices.push_back(x);
    }

    cout << bestTimeToBuyANdsellStock(prices) << endl;
}