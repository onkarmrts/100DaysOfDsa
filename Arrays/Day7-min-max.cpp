#include<iostream>
#include<climits>
using namespace std;

int main() {

          int n;
          cin>>n;
           int arr[n];

          for(int i=0; i<n; i++){
                    cin>>arr[i];
          }

          int maxNum=INT_MIN;
          int minNum=INT_MAX;

          for(int i=0; i<n; i++){
                //     if(arr[i]>maxNum){
                //           maxNum==arr[i];

                //     }
                //     if(arr[i]>minNum){
                //               minNum==arr[i];
                //     }
                  maxNum = max(maxNum, arr[i]);
                  minNum = min(minNum, arr[i]);

          }

          cout<< maxNum <<" "<< minNum ;
          return 0;

}