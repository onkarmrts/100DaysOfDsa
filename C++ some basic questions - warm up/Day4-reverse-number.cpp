#include <iostream>
#include <cmath>
using namespace std;

int main(){
          //prime number
          // int n; 
          // cin>>n;
          
          // bool flag=0;

          // for(int i=2; i<sqrt(n); i++){
          //         if(n%i==0){
          //            cout<<"Non-Prime"<<endl;  
          //            flag=1;
          //            break;
          //         }

          // }
          // if(flag==0){
          //        cout<<"prime"<<endl;  
          // }

          //reverse number

          int n;
          cin>>n;

          int reverse=0;
          while(n>0){
                    int lastdigit= n%10;
                    reverse = reverse*10 + lastdigit;
                    n=n/10;

          }

          cout<<reverse;


       


      
          return 0;
          
}