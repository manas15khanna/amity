#include "iostream"
using namespace std;
class Marks{
  int rollno;
public:
  string name;
  int marks;
  void fetchname(){
    cout<<"Enter name:";
    cin>>name;
  }
  void putrollnumber(int x){
    rollno = x;
  }
  string getname(){
    return name;
  }
};
class Physics:public Marks{
public:
  void fetchmarks(){
    cout<<"Enter Marks in physics:";
    cin>>marks;
  }
};
class Chemistry:public Marks{
public:
  void fetchmarks(){
    cout<<"Enter Marks in chemistry:";
    cin>>marks;
  }
};
class Maths:public Marks{
public:
  void fetchmarks(){
    cout<<"Enter Marks in maths:";
    cin>>marks;
  }
};
int main(){
  int n;
  cout<<"Enter the number of students";
  cin>>n;
  Physics p[n];
  Chemistry c[n];
  Maths m[n];
  for(int i = 0;i<n;i++){
    p[i].putrollnumber(i+1);
    p[i].fetchname();
    p[i].fetchmarks();
    c[i].putrollnumber(i+1);
    c[i].name = p[i].getname();
    c[i].fetchmarks();
    m[i].putrollnumber(i+1);
    m[i].name = p[i].getname();
    m[i].fetchmarks();
  }
  for(int i = 0;i<n;i++){
    cout<<"Name:"<<p[i].getname()<<endl;
    cout<<"Physics:"<<p[i].marks<<endl;
    cout<<"Chemistry:"<<p[i].marks<<endl;
    cout<<"Maths:"<<p[i].marks<<endl<<endl;
  }
}
