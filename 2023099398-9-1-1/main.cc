#include "intset.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    string add = "add";
    string del = "del";
    string get = "get";
    string quit = "quit";
    string word;
    int a;

    IntegerSet newIntegerSet;

    while(true){
        cin >> word;

        if(word==add){
            cin >> a;
            newIntegerSet.AddNumber(a);
        }
        else if(word==del){
            cin >> a;
            newIntegerSet.DeleteNumber(a);
        }
        else if(word==get){
            cin >> a;
            cout << newIntegerSet.GetItem(a) << endl;
        }
        else if(word==quit){
            break;
        }
    }
}