#include<iostream>
using namespace std;

class Pointer{
public:
    int value;
    Pointer() : value(0){};
};

void testPointer(Pointer& obj){
    obj.value = 100;
}

int main(){
    Pointer obj1;
    testPointer(obj1); 
    cout << obj1.value << endl;
    cout << "there value!" << endl;
    return 0;
}