
#include <iostream>
using namespace std;
int max(int, int);

int main() {

	int n, j=1, k=1, arr[100], nextmax, temp[20];
	cin>>n;

	for(int i=n; i<=2*n-1; i++ )
			cin>>arr[i];

	for(int i=2*n-2; i>1; i-=2) {

		arr[i/2] = max(arr[i],arr[i+1]);

	}

	for(int i=1; i<=2*n-1; i++) {
		cout<<arr[i]<<" ";
	}


	while(j<2*n-1) {

		if(arr[j*2] == arr[j]) {
			
			temp[k] = arr[j*2+1];
			j=j*2;
			k++;
			
		}
		else {

			temp[k] = arr[j*2];
			j=j*2+1;	
			k++;

		}
	}
	nextmax = temp[1];
	for(int i=2; i<k; i++) {
		nextmax=max(temp[i], nextmax);
	}

	cout<<"\nMAX = " << arr[1] << " NXT MAX = " << nextmax;
	return 0;
}

int max(int x, int y)
{
		if(x > y)
			return x;
		return y;
}

