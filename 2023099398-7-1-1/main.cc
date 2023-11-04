#include <iostream>
#include <string>
#include <sstream>
#include "magic_square.h"

using namespace std;

int main()
{
    string input;
    int num;
    cin >> input;

    stringstream ssInt(input);
    ssInt >> num;

    if (!ssInt.fail()){

        int **newMatrix = new int *[num];

        for (int i = 0; i < num; i++)
        {
            newMatrix[i] = new int[num];
        }

        magic_square(num, newMatrix);

        for (int i=0; i<num; i++){
            for(int j=0; j<num; j++){
                cout << newMatrix[i][j] << " ";
            }
            cout << endl;
        }
        

        for (int i = 0; i < num; i++)
        {
            delete[] newMatrix[i];
        }

        delete[] newMatrix;
    }

    return 0;
}
