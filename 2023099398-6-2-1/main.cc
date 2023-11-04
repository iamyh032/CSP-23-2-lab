#include "shapes.h"
#include <iostream>
#include <cmath>
using namespace std;

int main(void){
    Shape *array[10];
    for(int i=0; i<10; i++){
        array[i] = nullptr;
    }
    int fillIndex = -1;
    size_t row, col;

    string add = "add";
    string rect = "rect";
    string tri_up = "tri_up";
    string tri_down = "tri_down";
    string diamond = "diamond";
    string draw = "draw";
    string resize = "resize";
    string dump = "dump";
    string del = "delete";
    string quit = "quit";

    cin >> col >> row;
    Canvas newCanvas(row, col);
    newCanvas.Print();

    int judge = 0;
    while(judge == 0){
        string word;
        cin >> word;

        if(word==add){
            string shape;
            cin >> shape;

            if(shape==rect){
                fillIndex += 1;
                size_t a;
                size_t b;
                size_t c;
                size_t d;
                char e;
                cin >> a >> b >> c >> d >> e;
                Rectangle* newRectangle = new Rectangle();
                newRectangle->setMemberVariable(a,b,c,d,e);
                array[fillIndex] = newRectangle;
            }

            else if(shape==tri_up){
                fillIndex += 1;
                size_t a;
                size_t b;
                size_t c;
                char e;
                cin >> a >> b >> c >> e;
                UpTriangle* newUpTriangle = new UpTriangle();
                newUpTriangle->setMemberVariable(a,b,c,e);
                array[fillIndex] = newUpTriangle;
            }

            else if(shape==tri_down){
                fillIndex += 1;
                size_t a;
                size_t b;
                size_t c;
                char e;
                cin >> a >> b >> c >> e;
                DownTriangle* newDownTriangle = new DownTriangle();
                newDownTriangle->setMemberVariable(a,b,c,e);
                array[fillIndex] = newDownTriangle;
            }

            else if(shape==diamond){
                fillIndex += 1;
                size_t a;
                size_t b;
                size_t c;
                char e;
                cin >> a >> b >> c >> e;
                Diamond* newDiamond = new Diamond();
                newDiamond->setMemberVariable(a,b,c,e);
                array[fillIndex] = newDiamond;
            }
        }

        else if(word==draw){
            if(fillIndex<0){
                newCanvas.Print();
            }
            else{
                for(int i=0; i<=fillIndex; i++){
                    array[i]->Draw(&newCanvas);
                }
                newCanvas.Print();
            }
            newCanvas.Clear();
        }

        else if(word==resize){
            cin >> col >> row;
            newCanvas.Resize(row, col);
        }

        else if(word==dump){
            for(int i=0; i<=fillIndex; i++){
                cout << i << " ";
                array[i]->printInfo();
            }
        }

        else if(word==del){
            int del = -1;
            cin >> del;

            if(del<0 || del>fillIndex){
                // do nothing
            }

            else{
                delete array[del];
                for(int i=del; i<fillIndex; i++){
                    array[i] = array[i+1];
                }
                array[fillIndex] = nullptr;
                fillIndex -= 1;
            }
        }

        else if(word==quit){
            judge = -1;
        }
    }

    for(int i=0; i<10; i++){
        delete array[i];
    }
    
    return 0;
}