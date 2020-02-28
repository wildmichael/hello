#include "hello.hh"
#include <iostream>
#include <string>

int main(int argc, char** argv)
{
  std::string name;
  if (argc > 1)
  {
    name = argv[1];
  }
  else
  {
    name = "World";
  }
  auto greeting = hello::greeting(name);
  std::cout << greeting << "\n";
  return 0;
}
