#include <iostream>
using namespace std;

int main(){
    class Student{
    int rollno;
    char name[50];
    double fee;
    
    public:
    Student(){
        cout<<"Enter the Roll No.: ";
        cin>>rollno;
        cout<<"Enter the Name: ";
        cin>>name;
        cout<<"Enter the Fee: ";
        cin>>fee;
    }
    void disp(){
        cout<<"Name: "<<name;
        cout<<"\nRoll No.: "<<rollno;
        cout<<"\nFee: "<<fee;
    }
};
    Student s;
    s.disp();
    return 0;
}
    
