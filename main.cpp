#include "BookLibrary.h"
using namespace std;

int main()
{
BookLibrary librarie(3);
  
  //adaugam carti
  librarie.addBook("nume1","autor1",1);
  librarie.addBook("nume2","autor2",2);
  librarie.addBook("nume3","autor3",3);
  
  cout<<"Cartile din biblioteca: "<<endl;
  librarie.printBooks();
  
  //testare copy constructor
  BookLibrary copieLibrarie = librarie;
  cout<<"Copie a bibliotecii:"<<endl;
  copieLibrarie.printBooks();
  
  //verificam daca este deep copy
  copieLibrarie.addBook("nume4","autor4",4);
  
  //testare move constructor
   BookLibrary librarieMutata = move(librarie); //move = muta resursele de la un obiect la un nou obiect
   cout<<"Biblioteca mutata:"<<endl;
   librarieMutata.printBooks();
}
