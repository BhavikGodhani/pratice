#include <iostream>
using namespace std;

int insertion(int arr[],int n){

for(int i= 1; i<n ;i++){
    int temp = arr[i];
   int j = i-1; 
    for( ;j>=0; j--){
     if(arr[j]>temp){
        arr[j+1] = arr[j];
     }
     else{
        break;
     }
    }    
    arr[j+1] = temp ;
}

}
void printarray(int arr[],int n){
    for(int i= 0; i< n ;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
 int arr[8] = {1, 4, 6, 3, 9, 2, 5, 6};

     insertion(arr, 8);
    printarray(arr,8);
    return 0;
}