#include <iostream>
using namespace std;

int main() 
{
  
      string a ; 
      
      cin >> a; 
      
      int len  = a.size() ; 
      
      /*
      odd position == lower case 
      Even position == upper case 
      
      */
      
      for(int i = 0 ; i < len   ; i++)
      {
        if(i % 2 == 0 && isupper(a[i])) /// if even 
        {
          cout << "No" << endl; 
          return 0 ;
        }
        else if(i % 2 == 1 &&  islower(a[i]) ) // if odd 
        {
          cout<< "No" << endl; 
          return 0 ; 
        }
      }
      
      cout<< "Yes" <<endl;
      
      
    return 0;
}
