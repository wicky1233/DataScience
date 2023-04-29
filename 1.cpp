#include<iostream>
#include<fstream>

using namespace std;

int main()

{
    ofstream fname;
    fname.open("example.txt");
    fname<<"This is my first program in file handling";
    fname.close();
    return 0;
}