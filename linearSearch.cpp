#include <iostream>
#include <cstdlib>   // Needed for the exit function
using namespace std;

/** The method for finding a key in the list */
int linearSearch(int list[], int key, int SIZE) {
  for (int i = 0; i < SIZE; i++)
    if (key == list[i])
    {
        cout << "The key " << key << " is found at index "  << i << endl;
        return i;
    }
   cout << "The key " << key << " is not found "  << endl;
  return -1;
}

int main()
{

    const int SIZE = 8;
    int list[SIZE] = {1, 4, 4, 2, 5, -3, 6, 2};
    int i = linearSearch(list, 4, SIZE);  // returns 1
    int j = linearSearch(list, -4, SIZE); // returns -1
    int k = linearSearch(list, -3, SIZE); // returns 5

}
