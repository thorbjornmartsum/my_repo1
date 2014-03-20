#include <iostream>


int main(int argc, char *argv[])
{
  int u = 0;
  for (; u < argc; ++u) {
std::cout << u << argv[u] << "\n";
  }
  return 1;
}
