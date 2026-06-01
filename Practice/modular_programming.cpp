/*#include <iostream>
using namespace std;
int area (int length, int breadth){
    return length*breadth;
}
int perimeter(int length, int breadth){
    int p;
    p = 2 * (length + breadth);
    return p;
}
int main(){
    int length , breadth;
    cout << "Enter length and breadth: ";
    cin >> length >> breadth;
    int a = area(length, breadth);
    int peri = perimeter(length, breadth);
    cout << "Area: " << a << "\nPerimeter: " << peri << endl;
}
*/
/*#include <iostream>
using namespace std;
struct rectangle{
    int length,breadth;
};
int area (rectangle r){
    return r.length*r.breadth;
}
int perimeter(rectangle r){
    int p;
    p = 2 * (r.length + r.breadth);
    return p;
}
int main(){
    rectangle r = {0,0};
    cout << "Enter length and breadth: ";
    cin >> r.length >> r.breadth;
    int a = area(r);
    int peri = perimeter(r);
    cout << "Area: " << a << "\nPerimeter: " << peri << endl;
    return 0;
}*/
/*#include <iostream>
using namespace std;
struct rectangle{
    int length,breadth;
};
void initialize(struct rectangle *r, int l, int b){
    r-> length = l;
    r-> breadth = b;
}
int area (rectangle r){
    return r.length*r.breadth;
}
int perimeter(rectangle r){
    int p;
    p = 2 * (r.length + r.breadth);
    return p;
}
int main(){
    rectangle r = {0,0};
    int l,b;
    cout << "Enter length and breadth: ";
    cin >> l >> b;
    initialize(&r,l,b);
    int a = area(r);
    int peri = perimeter(r);
    cout << "Area: " << a << "\nPerimeter: " << peri << endl;
    return 0;
}
*/
#include <iostream>
#include <stdio.h>
using namespace std;

class rectangle{
    private:
    int length,breadth;
public:
void initialize(struct rectangle *r, int l, int b){
    length = l;
    breadth = b;
}
int area (){
    return length * breadth;
}
int perimeter(){
    int p;
    p = 2 * (length + breadth);
    return p;
}
};
int main(){
    rectangle r;
    int l,b;

    cout << "Enter length and breadth: ";
    cin >> l >> b;

    r.initialize(&r,l,b);

    int a = r.area();
    int peri = r.perimeter();

    cout << "Area: " << a << "\nPerimeter: " << peri << endl;
    return 0;
}