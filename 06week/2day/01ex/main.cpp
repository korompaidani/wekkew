#include <iostream>
using namespace std;

// Write a try - catch block.
// Throw an integer in the try block
// Catch it in the catch block and write it out.

int main() {

  try {
    int i = 1;
    throw i;
  } catch (int alma) {
    cout << alma << endl;
  }


	return 0;
}
