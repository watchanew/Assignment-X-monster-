#include <iostream>
using namespace std;
#include"monster.h"

int main() {
  monster x[10]={{"Cesar",100,50},{"Mason",90,40},{"Kante",120,100}},*pt;
  cout<<"======"<<endl;
  pt = new monster("McGuire",80,10);
  delete pt;
  cout<<"======"<<endl;
}