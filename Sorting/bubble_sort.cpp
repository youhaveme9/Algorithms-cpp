# include <iostream>
using namespace std;

int main()
{
	cout<<"Enter the length of array"<<endl;
	int m, temp,n;
	cin>>n;
	int arr[n];
	cout<<"Enter the elements of array"<<endl;
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j= 0; j< n-1; j++)
		{
			if (arr[j]>arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}