#include <iostream>
using namespace std;

class Num {
    int x, y;

public:
    Num(int a, int b) {  
        x = a;
        y = b;
    }

    void display() {
        cout << "X= " << x;
        cout << "\nY= " << y;
    }
};

int main() {
    Num n1(10, 20); 
    n1.display();
    return 0;
}
