#include <iostream>
#include <chrono>

int main()
{
  std::cout << "test de performances de ml::vector" << std::endl;
  
  auto start = std::chrono::system_clock::now();
  // TODO
  auto end = std::chrono::system_clock::now();
  
  auto elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(end-start).count();
  
  std::cout << "test de performances de ml::version1::matrix" << std::endl;
  
  // TODO
  
  std::cout << "test de performances de ml::version2::matrix" << std::endl;
  
  // TODO
  
  return 0;
}
