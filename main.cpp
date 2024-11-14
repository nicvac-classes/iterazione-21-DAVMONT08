#include <iostream>
using namespace std;

int main() {
              int p,pa,pb;
              p=0;
              pa=0;
              pb=0;
              while(p<30)
              {
                 cout<<"quanti adulti sono saliti?"<<endl;
                 cin>> pa;
                 cout<<" quanti bambini sono saliti?"<<endl;
                 cin>> pb;
                 p=p+pa;
                 p=p+(pb/2);
              }
              if(p>30)
              {
                cout<<"bisogna liberare " << p-30 <<endl;
              } 
              else
              {
                 cout<<" la giostra è al completo"<<endl;
              }
     
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
