#include <iostream>
#include <string>

// say what standard-library names we use
using std::cin;
using std::endl;
using std::cout;
using std::string;

int main()
{
    // square
    {
        const int rows = 4;
        const int cols = (int)(rows * 1.6f);

        for (int y = 0; y < rows; y++) {
            for (int x = 0; x < cols; x++) { 
                if (y == 0 || y == rows - 1 || x == 0 || x == cols - 1) {
                    cout << "*";
                } else {
                    cout << " ";
                }
            }

            cout << endl;
        }
    }

    cout << endl;

    // rectangle
    {
        const int rows = 4;
        const int cols = rows * 3;

        for (int y = 0; y < rows; y++) {
            for (int x = 0; x < cols; x++) { 
                if (y == 0 || y == rows - 1 || x == 0 || x == cols - 1) {
                    cout << "*";
                } else {
                    cout << " ";
                }
            }

            cout << endl;
        }
    }
}