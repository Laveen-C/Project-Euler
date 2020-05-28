#include <iostream>
#include <vector>

int main() {

  std::vector<int> yeet(12);

  int i;
  
  for (i = 0; i < yeet.size(); i++) {
  std::cout << yeet[i] << std::endl;
  }

  return 0;
}