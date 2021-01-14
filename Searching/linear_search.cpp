# include <iostream>
using namespace std;

int search(int arr2[], int n, int key){
    for(int i=0; i<n; i++){
        //comparing key to array values one by one
        if(arr2[i]==key){
            return i;
        }
    }
    //if number is not found
    return -1;
}


int main(){
    int n;
    cout<<"Enter the length of array"<<endl;
    cin>>n;
    int arr2[n];
    for(int i=0; i<n;i++){
        cin>>arr2[i];
    }
    int key;
    cout<<"Enter the key to find in the array"<<endl;
    cin>>key;
    int result = search(arr2, n, key);
    if(result==-1){
        cout<<"Number is not present"<<endl;
    }
    else{
        cout<<"Number is present at index "<<result<<endl;
    }
    return 0;
}