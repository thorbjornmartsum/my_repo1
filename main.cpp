#include <iostream>


int main(int argc, char *argv[])
{
  for (int u = 0; u < argc; ++u)
    std::cout << u << argv[u] << "\n";
  return 1;
}
