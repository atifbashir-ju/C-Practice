#include <iostream>
using namespace std;
int main() {
    int arr[5] = {2, 3 , 80, 5, 90};
    int mx = arr[0];
    for(int i =0; i<=4; i++) {
        mx= max(mx, arr[i]);
    }
   int smx = int ;
    for(int i =0; i<=4; i++) {
        if(arr[i]!=mx) mx =max(mx, arr[i]);
      cout<<mx;
    }
    }
