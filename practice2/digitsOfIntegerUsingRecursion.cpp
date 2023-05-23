#include<iostream>
using namespace std;

void printDigits(int num){
    if(num == 0)
        return;

    int rem = num % 10;
    printDigits(num / 10);
    cout << rem << " ";
}

int main(){
    int num;
    cin >> num;

    printDigits(num);

    return 0;
}