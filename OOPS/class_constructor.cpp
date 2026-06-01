#include <iostream>
using namespace std;
class rectangle{
    private:
    int length, breadth;
    public:
    rectangle (int l, int b){
        length = l;
        breadth = b;
    }
    void area(){
        cout<< "Area: " << length * breadth << endl;
    }
    void changelength(int l1){
        length = l1;
    }

}; 
int main(){
    rectangle r(10,5);
    r.area();
    r.changelength(20);
}