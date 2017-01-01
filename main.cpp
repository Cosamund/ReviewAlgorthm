#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>
#include "main.hpp"

using namespace std;

const char* keys =
{
    "{1| |lena.jpg|input image file}"
};

CommandLineParser::CommandLineParser(int argc, const char* const argv[], const char* keys)
{
  ;
}

int main(int argc, char** argv)
{
  CommandLineParser parse(argc, argv, keys);

  return 0;
}
