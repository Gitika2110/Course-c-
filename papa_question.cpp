#include <iostream>
using namespace std;

int main() {
    int i;
    int calAge;
    for(i = 1; i <= 10; i++) {
        cout << "GJ_Age_Cal " << calAge << endl;
        
        calAge = i * i +1;
        if(i ==  3) { 
            calAge = calAge + 1;
        }
        
        cout << "Loop stopped at i = " << i << endl;
        cout << "Hello" << endl;
    }
}