#include <iostream>
#include <fstream>
using namespace std;

int raom(){
    srand(time(0));
    return (rand() %10 + 1);
}

int main(){
    ofstream.out;
    out.open("file1.txt");
    out << raom() << ""  << raom() << "" << raom() << "" << raom() << "" << raom() << "" << raom() << "" << raom() << "" << raom() << "" << raom() << "" << raom() << endl;
    out.close;
    out.open("file2.txt");
    out << raom() << ""  << raom() << "" << raom() << "" << raom() << "" << raom() << "" << raom() << "" << raom() << "" << raom() << "" << raom() << "" << raom() << endl;
    out.close;
    out.open("file3.txt");
    out << raom() << ""  << raom() << "" << raom() << "" << raom() << "" << raom() << "" << raom() << "" << raom() << "" << raom() << "" << raom() << "" << raom() << endl;
    out.close;
}
