#include <string>
#include <iostream>
  
using namespace std;
  
int main()
{
    string str;
    cout << "Entre com uma string" << endl; 
        cin >> str;
  
  size_t tamanho = str.length();
  cout << "Esta string tem " << tamanho << " caracteres" << endl;
        
}