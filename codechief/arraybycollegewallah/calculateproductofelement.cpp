#include <iostream>
using namespace std;
int main() {
    int arr[5] = {2, 3, 4, 5, 6,};
    int n = 5;
    int product =1;
    for(int i = 0; i<5; i++) {
        product *= arr[i];

    }
    cout<<"product of all elements="<<product;
}