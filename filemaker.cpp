#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

int raom(){
    srand(time(0));
    return (rand() %10 + 1);
}

int main(){
    ofstream out;
    ofstream out2;
    ofstream out3;
    out.open("file1.txt");
    out << raom() << ""  << raom() << "" << raom() << "" << raom() << "" << raom() << "" << raom() << "" << raom() << "" << raom() << "" << raom() << "" << raom() << endl;
    out.close();
    out2.open("file2.txt");
    out << raom() << ""  << raom() << "" << raom() << "" << raom() << "" << raom() << "" << raom() << "" << raom() << "" << raom() << "" << raom() << "" << raom() << endl;
    out2.close();
    out3.open("file3.txt");
    out << raom() << ""  << raom() << "" << raom() << "" << raom() << "" << raom() << "" << raom() << "" << raom() << "" << raom() << "" << raom() << "" << raom() << endl;
    out3.close();
}
