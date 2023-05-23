#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    int arr[100];
    int i = 0;

    while(num != 0){
        int rem = num % 10;
        arr[i] = rem;
        i++;

        num /= 10;
    }

    for(int j=i-1; j>-1; j--){
        cout << arr[j] << " ";
    }


    return 0;
}