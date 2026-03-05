// linear search 
#include <iostream>
using namespace std;
int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int i , search,k= 0;
    cout << "Enter the number you want to search: ";
    cin >> search;
    for(i=0; i<10; i++){
        if(arr[i] == search){
            cout<<"The number is found at index "<< i <<endl;
            k++;
            break;
        }
    }
    if(k==0){
        cout<<"The number is not found" <<endl;
    }
}