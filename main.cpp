#include <iostream>
using namespace std;

int main() {
   int x=1, y=0, z, i=0, n;
   cin >>n;
   if(n<2){
       cout <<"errore\n";
   }else {
   while(i<n){
       z=x+y;
       x=y;
       y=z;
       ++i;
       cout <<z <<endl;
   }}
   return 0;
}
