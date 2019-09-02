#include <iostream>
#include <cstring>
using namespace std;

void back(char *puntero,int size){

      while(size>0){
         size=size-1;
         cout<<*(puntero+size);
      }
      return;

}

int main()
{
    char Frase[]="I challange my fate!";
    cout<<"Frase Original:"<<endl;
    cout<<Frase<<endl;

    cout<<"Frase Alrevez:"<<endl;

    size_t length = strlen(Frase);


    back(Frase, length);
}