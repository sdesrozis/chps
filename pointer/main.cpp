#include <iostream>

int main()
{
  int a = 1, b = 2, c = 3;
  int *p1 = nullptr, *p2 = nullptr;

  p1 = &a;
  a = 4;

  std::cout << " a = " << a << std::endl;
  std::cout << " b = " << b << std::endl;
  std::cout << " c = " << c << std::endl;
  std::cout << " &a = " << &a << std::endl;
  std::cout << " &b = " << &b << std::endl;
  std::cout << " &c = " << &c << std::endl;
  std::cout << " p1 = " << p1 << std::endl;
  std::cout << " p2 = " << p2 << std::endl;
  if(p1 != nullptr)
    std::cout << " *p1 = " << *p1 << std::endl;
  else
    std::cout << " *p1 = nullptr" << std::endl;
  if(p2 != nullptr)
    std::cout << " *p2 = " << *p2 << std::endl;
  else
    std::cout << " *p2 = nullptr" << std::endl;
}
