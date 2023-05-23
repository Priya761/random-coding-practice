#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void createDigitArray(int num, vector<int> &digitArray){
    if(num == 0)
        return;

    int rem = num % 10;
    createDigitArray(num / 10, digitArray);
    digitArray.push_back(rem); 
}

int main(){
    int num;
    cin >> num;

    vector<int> digitArray;
    createDigitArray(num, digitArray);

    // sort the array in descending order
    sort(digitArray.begin(), digitArray.end(), greater<int>());

    for(int i=0; i<digitArray.size(); i++){
        cout << digitArray[i];
    }
}