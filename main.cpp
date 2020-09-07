#include <iostream>

const int MAXCAPACITY = 10;

int main() {
  int nums[MAXCAPACITY];
  int * ptrLastElement = nums + (MAXCAPACITY-1);
  for(int index = 0 ; index < MAXCAPACITY ; index++){
    std::cout << "Enter a Number for index " << index << ": ";
    std::cin >> nums[index];
  }
  for (int * curr = nums; (ptrLastElement - curr) >= 0 ; ++curr){
    std::cout << *curr << " ";
  }
}