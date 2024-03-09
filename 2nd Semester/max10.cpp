//1 March
#include <iostream>
int main()
{
  int nums[10], min, max;
  std::cout << "Enter 10 numbers:" << std::endl;
  for (int i=0; i<10; i++) {
    std::cin >> nums[i];
  }
  min=max=nums[0];
  for (int i=0; i<10; i++) {
    if(min>nums[i]) min=nums[i];
    if(max<nums[i]) max=nums[i];
  }
  std::cout << "max=" << max << "\nmin=" << min << std::endl;
}
