#include <bits/stdc++.h>
using namespace std;

int getmin(int num[], int n) {
    int minVal = INT_MAX;  
    for(int i = 0; i < n; i++) {
        if(num[i] < minVal) {   
            minVal = num[i];
        }
    }
    return minVal;
}

int main() {
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    int num[200];  

    cout << "Enter " << size << " elements: ";
    for(int i = 0; i < size; i++) {
        cin >> num[i];
    }

    cout << "Minimum value is " << getmin(num, size) << endl;

    return 0;
}
