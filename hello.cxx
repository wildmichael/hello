#include "hello.hh"

std::string hello::greeting(std::string const& name)
{
  return "Hello, " + name + "!";
}
