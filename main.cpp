#include <iostream>
#include <string>

std::string f() noexcept 
{
  return "Hello world";
}

int main() 
{
  std::cout << f() << '\n';
}
