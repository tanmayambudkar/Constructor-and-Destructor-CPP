#include <iostream>
using namespace std;

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
int main(){
    Student s;
    s.disp();
    return 0;
}
    

