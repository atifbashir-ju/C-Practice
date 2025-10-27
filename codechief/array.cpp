#include <iostream>
using namespace std;

string findX(int arr[], int X, int N) {
    for (int i = 0; i < N; i++) {
        if (arr[i] == X) {
            return "yes";
        }
    }
    return "no";
}

int main() {
    int N, X;
    cin >> N;
    cin >> X;

    int arr[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    cout << findX(arr, X, N) << endl;

    return 0;
}
