//Write a program to print weekdays using switch statement
#include <iostream>
int main(){
  std::cout << "Enter the number of day:" << std::endl;
  int x;
  std::cin>>x;
  switch (x) {
    case 1:std::cout<<"Monday" << std::endl; break;
    case 2:std::cout<<"Tuesday" << std::endl;  break;
    case 3:std::cout<<"Wednesday" << std::endl;  break;
    case 4:std::cout<<"Thursday" << std::endl; break;
    case 5:std::cout<<"Friday" << std::endl;  break;
    case 6:std::cout<<"Saturday" << std::endl;  break;
    case 7:std::cout<<"Sunday" << std::endl;  break;
    default:std::cout<<"Invalid Input" << std::endl;  break;
  }
}
