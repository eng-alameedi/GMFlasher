#include "user_input.h"

bool arguments_validate(int arg_count, char** arg_v) {
  int operation{};
  const char* options = "p:m:b:c:F:";
  while ((operation = getopt(arg_count, arg_v, options))) {
    // code here
  }
  return true;
}
