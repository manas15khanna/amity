// 13 March, Wednesday
#include <iostream>
using namespace std;
int main()
{
  int nums[10], min, max;
  cout << "Enter 10 numbers:" <<endl;
  for(int i=0; i<10; i++)
      cin >> nums[i];
  min=max=nums[0];
      for(int i=0; i<10; i++)
  {
    if (min>nums[i]) min=nums[i];
    if (max<nums[i]) max=nums[i];
  }
  cout << "The maximum is: " << max << endl;
  cout << "The minimum is: " << min << endl;
}
