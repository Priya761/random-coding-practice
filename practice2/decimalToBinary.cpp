#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int num;
    vector<int> binary;

    cin >> num;

    while(num != 0){
        int rem = num % 2;
        binary.push_back(rem);

        num /= 2;
    }

    // reverse the vector
    reverse(binary.begin(), binary.end());

    for(int i=0; i<binary.size(); i++){
        cout << binary[i];
    }cout<< endl;
}