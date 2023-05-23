#include<iostream>
using namespace std;

int main(){
    int distanceInKm;
    cin >> distanceInKm;

    float distanceInMiles = distanceInKm * 0.621371;

    cout << distanceInMiles << endl;
}