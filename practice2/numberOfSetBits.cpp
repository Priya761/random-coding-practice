#include<iostream>
using namespace std;

int main(){
    int num, count = 0;
    cin >> num;

    while(num != 0){
        int rem = num % 2;

        if(rem == 1)
            count++;

        num /= 2;
    }

    cout << count;

    return 0;
}