#include <iostream>
#include <cmath>

using namespace std;

long long int power( long long int val, long long int pow=0 ) {
	if ( pow <= 0 )
		return 1;
	return val * power( val, pow-1ll );
}

int arr[51][51];

int main()
{

    long long int n,m,input,sumones=0,sumzeros=0;
    long long int finalsum,sum=0;

    cin >> n >> m;
    for(int i=0;i<n;i++){
        for (int j=0;j<m;j++){
              cin >> input;
              arr[i][j]=input;

        }
    }


   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(arr[i][j]){
            sumones++;
        }
        else {sumzeros++;}

    }
    sum = sum + (power(2ll,sumones)-1ll) + (power(2ll,sumzeros)-1ll);
    sumones = sumzeros = 0ll;
   }
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        if(arr[j][i]){
            sumones++;
        }
        else {sumzeros++;}
    }
    sum = sum + (power(2ll,sumones)-1ll) + (power(2ll,sumzeros)-1ll);
    sumones = sumzeros = 0ll;
  }
finalsum = sum - m*n;
cout <<finalsum;

    return 0;
}
