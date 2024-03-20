//20 March
#include <iostream>
using namespace std;
class AddAmount
{
    private:
     float money;
    public:
   AddAmount(){
    //no money added
    money=50;
  } 
  AddAmount(float x){
    money=x+50;
  }
  float adding()
  {
    return money;
  }
};
int main()
{
  AddAmount nopar;
  AddAmount onepar(50);
  cout << "New Money: " << nopar.adding() << endl;
  cout << "New Money: " << onepar.adding() << endl;

}
