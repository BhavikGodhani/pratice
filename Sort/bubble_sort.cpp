#include<iostream>
using namespace std;

int Bubblesort(int arr[],int n){

    for(int i = 0; i< n-1; i++){
        for(int j = 0; j<n-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
} 



void printarray(int arr[],int n){
    for(int i = 0; i< n ;i++){
        cout << arr[i]<<" "; 
    }
    cout<<endl;
}
int main(){
  int arr[7]= {1,4,6,3,7,9,2};

  Bubblesort(arr,7);
  printarray(arr,7);
    return 0;
}
