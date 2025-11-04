#include <iostream>
using namespace std;
int main() {
    char ch;
    cout<<"enter any charchter: ";
    cin>>ch;
    
    if(ch>= 'a' && ch<='z'){
        cout<< "lower case"<< " ";

    } else if(ch>= 'A' &&ch <= 'Z'){
        cout<<"upper case"<<" ";

    } else if(ch>= '0'&& ch<='9') {
        cout<<"digit"<<" ";

    } else {
        cout<< "special charchter"<<" ";

    }
    return 0;
}