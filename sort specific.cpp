#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  // Create a vector called numbers that will store integers
  vector<int> numbers = {1, 7, 3, 5, 9, 2};

  // Sort numbers numerically, starting from the fourth element (only sort 5, 9, and 2)
  sort(numbers.begin() + 3, numbers.end());//numbers.begin() + k

  // Print numbers
  for (int num : numbers) {
    cout << num << "\n";
  }
  
  return 0;
}