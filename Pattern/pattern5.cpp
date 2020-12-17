/*  for n = 6
     1   
     22  
     333 
     4444
     55555
     666666  */

# include <iostream>
using namespace std;

int main(){
    cout<<"Enter a number"<<endl;
    int n;
    cin>>n;
    for(int i =1; i<=n;i++){
        for(int j=1; j<=i; j++){
            cout<<i;
        }
        cout<<endl;
    }
}