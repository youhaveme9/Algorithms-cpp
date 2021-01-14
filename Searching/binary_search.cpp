# include <iostream>
# include <string>
using namespace std;

int binarySearch(int arr[], int n, int key){
    // getting both end of the array 
    int s = 0;
    int end = n;
    int mid;
    while(s<=end){
        // finding middle index of array
        mid = (s+end)/2;
        if(arr[mid]==key){
        //if key is found at middle
            return mid;
        }
        else if(key<arr[mid]){
            end = mid-1;
        }
        else{
            s=mid+1;
        }
    }
    //if key is not found in the array
    return -1;
}


int main(){
    int n, key,i;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    //input array 
    //enter array in sorted manner
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the key to search"<<endl;
    cin>>key;
    int index = binarySearch(arr, n, key);
    string result = (index==-1)? "Number not found": "Found at "+to_string(index)+ " position";
    cout<<result<<endl;
    return 0;
}