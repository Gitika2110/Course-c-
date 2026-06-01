#include <iostream>

using namespace std;

class rectangle{

    private:
        int length, breadth;

    public:

        rectangle(){
            length = 0;
            breadth = 0;
        }

        rectangle(int l, int b){
            length = l;
            breadth = b;
        }

        int area(){
            return length * breadth;
        }

        int perimeter(){
            return 2 * (length + breadth);
        }

        int getlength(){
            return length;
        }

        int getbreadth(){
            return breadth;
        }

        void setlength(int l){
            length = l;
        }

        void setbreadth(int b){
            breadth = b;
        }
        ~rectangle(){
            cout << "Destructor" << endl;
        }
        
};
int main (){
    rectangle r (10, 5);
    cout << "Area: " << r.area()<< endl;
    cout << "Perimeter: " << r.perimeter() << endl;
    return 0;
}