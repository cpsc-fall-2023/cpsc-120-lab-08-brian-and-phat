// Phat Tran
// ptran2005@csu.fullerton.edu
// @ptran2005
// Partners: @BrianTheDevGuy

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (arguments.size() < 2) {
    std::cout << "error: you must supply at least one number";
    return 1;
  }

  double sum = 0.0;
  bool first_index = true;
  for (const std::string& input : arguments) {
    if (first_index) {
      first_index = false;
      continue;
    }
    sum += std::stod(input);
  }

  double average = (sum / static_cast<double>(arguments.size() - 1));

  std::cout << "average = " << average << "\n";
  return 0;
}
