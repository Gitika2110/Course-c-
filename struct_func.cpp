#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct rectangle{
    int length;
    int breadth;
};
void initialize(struct rectangle *r, int l, int b){
    r->length = l;
    r->breadth = b;
};
int area(struct rectangle r){
    return r.length * r.breadth;
};
void changelength(struct rectangle *r, int l1){
    r->length = l1;
};
int main(){
    struct rectangle r;
    initialize(&r, 10, 5);
    cout<< "Area: " << area(r) << endl;
    changelength(&r,20);
    cout << "New Area: " << area(r) << endl;
    return 0;
}