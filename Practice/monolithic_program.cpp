#include <iostream>
using namespace std;
int main(){
    int length, breadth;
    cout << "Enter length and breadth: ";
    cin >> length >> breadth;
    int area = length * breadth;
    int peri = 2 * (length + breadth);
    cout << "Area: " << area << endl << "Perimeter: " << peri << endl;
    return 0;
}