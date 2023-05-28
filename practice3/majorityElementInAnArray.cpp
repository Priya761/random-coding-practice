#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

// bubble sort
void sort(int *arr, int size){
    for(int i=0; i<size-1; i++){
        for(int j=0; j<size-1-i; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
    int n;
    cin >> n;

    int arr[n];

    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        arr[i] = x;
    }

    sort(arr, n);

    // for(int i=0; i<n; i++){
    //     cout << arr[i] << " ";
    // }cout << endl;

    int count = 1;
    int maxCount = INT_MIN;

    // one pointer approach
    int i=1;
    int majorityNum = INT_MIN;
    while(i < n){
        if(arr[i] == arr[i-1]){
            // j++;
            count++;
        }else{
            count = 1;
            // j++;
        }
        maxCount = max(maxCount, count);
        if(maxCount > n/2)
            majorityNum = arr[i];
        i++;
    }

    // two pointer approach
    // int i=0, j=1;
    // int majorityNum = INT_MIN;
    // while(j < n){
    //     if(arr[j] == arr[i]){
    //         // j++;
    //         count++;
    //     }else{
    //         i=j;
    //         count = 1;
    //         // j++;
    //     }
    //     maxCount = max(maxCount, count);
    //     if(maxCount > n/2 && maxCount != 1)
    //          majorityNum = arr[j];
    //     j++;
    // }

    if(majorityNum == INT_MIN)
        cout << "No majority number" << endl;
    else
        cout << "Majority num: " << majorityNum << endl << "Frequency: " << maxCount << endl;
    

    return 0;
}
