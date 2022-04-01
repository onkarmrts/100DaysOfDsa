#include<iostream>
using namespace std;


int main(){

          int n;
          cin>>n;

          int a = 0;
          for(int i = 1; i<=n; i++){
                    a=a+1;
          }
          for(int j =0; j<=m; j++){
                    a = a + 1;
          }
          return 0; 

}
//Time copmplexibility: O(n+M)


int n,m;
cin>>n>>m;

int a = 0;

for(int i=0; i<=n; i++){ 
          for(int j = 1;j<=m;j++){
                    a = a + rand();
          }
}

//Time copmplexibility: O(n*M)

int n;
cin>>n;

int a = 0, i=n;

while(i>=1){
          a = a + 1;
          i/=2;
}

//Time copmplexibility: O(log n)


