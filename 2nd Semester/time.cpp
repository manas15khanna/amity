//Write a c++ program to define a class time with minutes, seconds and hours as member variables and settime, showtime, normalize as member functions.
#include <iostream>
using namespace std;
class Time{
  int hours, minutes, seconds;
public:
  void settime(){
    cin>>hours>>minutes>>seconds;
    normalize();
  }
  void showtime(){
    cout<<hours<<":"<<minutes<<":"<<seconds<<endl;
  }
    void normalize(){
    minutes+= seconds/60;
    hours+= minutes/60;
    seconds = seconds % 60;
    minutes %= 60;
  }
};
int main(){
  Time t;
  t.settime();
  t.showtime();
}
