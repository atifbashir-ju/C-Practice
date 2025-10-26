#include <iostream>
using namespace std;
int main() {
 
    int marks;
    cout<<"enter students marks : ";
    cin>>marks;
   
    if(marks>=90) {
        cout<<"GRADE A+";
    } 
    else if(marks>=80) {
        cout<<"GRADE A";

    } else if(marks>=70) {

        cout<<"GRADE B";

    } else if(marks>=60) {
        cout<<"GRADE C";

    } else if(marks>=50) {
        cout<<"GRADE D";

    } else {
        cout<<"FAIL";

    }
    return 0;
    
}
