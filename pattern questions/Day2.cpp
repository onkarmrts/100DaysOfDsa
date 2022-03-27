#include<iostream>
using namespace std;

int main(){
          

          // #recangle pattern
          // int row, col;
          //  cin>>row>>col;

          // for(int i=1; i<=row; i++){
          //           for(int j=1; j<=col;j++){
          //                     cout<<"*";
          //           }
          //           cout<<endl;

          // }

          // Hollow recangle
          // int row, col;
          // cin>>row>>col;

          // for(int i=1; i<=row; i++){
          //           for(int j=1; j<=col;j++){
          //                     if(i==1 || i==row){
          //                               cout<<"*";
          //                     }
          //                     else  if(j==1 || j==col){
          //                               cout<<"*";
          //                     }
          //                     else{
          //                               cout<<" ";
          //                     }
          //           }
          //           cout<<endl;
          // }

          // invnerted half pyramid

          // int n;
          // cin>>n;

          // for(int i=n; i>=1; i--){
          //           for(int j=1; j<=i;j++){
          //                     cout<<"*";
          //           }
          //           cout<<endl;
          // }

          // int n;
          // cin>>n;


          // for(int i=1; i<=n;i++){
          //           for(int j=1; j<=n;j++){
          //                     if(j<=n-i){
          //                               cout<<" ";
          //                     }else{
          //                               cout<<"*";
          //                     }
          //           }
          //           cout<<endl;
          // }

          int n;
          cin>>n;

          for(int i=0; i<=n;i++){
                    for(int j=1; j<=i; j++){
                              cout<<"*"<<" ";
                    }
                    cout<<endl;
          }


      

          return 0;

}