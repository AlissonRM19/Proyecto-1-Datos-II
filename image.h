#ifndef PROYECTO_1_DATOS_II_IMAGE_H
#define PROYECTO_1_DATOS_II_IMAGE_H

#endif //PROYECTO_1_DATOS_II_IMAGE_H

#include <iostream>
#include "fstream"
#include "string"

using namespace std;

int test(){
    ifstream image("Bakugo.jpg", ios::in | ios::binary);
    ofstream binary("binary_image.txt", ios::out|ios::app);

    char ch;
    while(!image.eof()){
        ch=image.get();
        binary.put(ch);
    }
    cout<<"Successfully converted..."<<endl;
    image.close();
    binary.close();
    return 0;
}