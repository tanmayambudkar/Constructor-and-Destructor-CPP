#include <iostream>
using namespace std;

class Student {
  int prn;
  char grade;
  public:
  Student(int p,char g){
      grade=g;
      prn=p;
  }
  Student(const Student &s){
      grade=s.grade;
      prn=s.prn;
  }
  void display(){
      cout<<"PRN: "<<prn;
      cout<<"\nGrade: "<<grade;
  }
};
int main(){
    Student s1(119,'A');
    Student s2=s1;
    cout<<"Original Output: ";
    s1.display();
    cout<<"\nCopied Output: ";
    s2.display();
    return 0;
}