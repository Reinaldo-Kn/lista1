#include <iostream>
#include <string>


using namespace std;

int main (){
    string primeira,segunda;
    cout << " Insira a primeira string: " << endl;
    cin >> primeira;
    cout << " Insira a segunda string: " << endl;
    cin >> segunda;

    size_t found = segunda.find(primeira);

    if ( found != string::npos){
        cout << " 1 " << endl;
    }    
    else{
        cout << " 0 " << endl;
    }
}