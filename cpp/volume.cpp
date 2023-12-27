#include <iostream>
using namespace std;

void volume(int side){
            cout << "Volume of cube: " << side * side * side << endl;
}
void volume(int l, int b, int h){
            cout << "Volume of cuboid: " << l * b * h << endl;
}
void volume(int r, int h){
            cout << "Volume of cylinder: " <<  22/7 * r * r * h << endl;
}

int main(){
    // volume of cube
    volume(4);
    // volume of cuboid
    volume(2,2,8);
    // volume of cylinder
    volume(4);
}