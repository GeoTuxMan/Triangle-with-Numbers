#include <iostream>
using namespace std;

//input: 4
//output:  4  3  2  1
//         3  2  1
//         2  1
//         1

int main()
{
  int n, i;
  cin>>n;
    
  
   while(n>0){
              i=n;
              while(i>0){
                 cout<<i<<" ";
                 i--;
                 }
              cout<<endl;
              n--;
              } 
   
    
  system("PAUSE");//ca sa nu inchida fereastra cu output-ul
  return 0;
}

//for (i = 1; i <= N; ++i)
//    cout<<i<<" ";//afiseaza numerele de la 1 la N
//  for (i = N; i >= 1; --i)
//    cout<<i<<" ";//afiseaza numerele de la N la 1
