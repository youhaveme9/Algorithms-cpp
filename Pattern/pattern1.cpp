/*  Enter the numbers of column
    5
    Enter the number of rows
    4
    ****
    ****
    ****
    ****
    ****    */


# include <iostream>
using namespace std;

int main(){
    cout<<"Enter the numbers of column"<<endl;
    int c;
    cin>>c;
    cout<<"Enter the number of rows"<<endl;
    int r;
    cin>>r;
    for(int i=1;i<=c;i++){
        for(int j=1;j<=r;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}