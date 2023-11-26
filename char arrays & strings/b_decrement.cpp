#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e5+10;

int main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int num;
	cin>>num;
	while(num--)
	{
		int n;
        cin>>n;
        int max_nos=0;
        int arr[N],b[N],c[N];
        for(int i=1;i<=n;i++)
            cin>>arr[i];
        for(int i=1;i<=n;i++)
            cin>>b[i];
         int func=1;
          for (int i = 1; i <= n; i ++) {
        c[i] = arr[i] - b[i];
        max_nos = max(max_nos, c[i]);
         
        if (c[i] < 0) {
            func=0;
           break;
        }
    }
  
    for (int i = 1; i <= n; i ++) {
        arr[i] -= max_nos;
        if (arr[i] < 0) arr[i] = 0;
        if (arr[i] != b[i]) {
            func=0;
          
        }
    }
    if(func==1)
	cout<<"YES"<<endl;
else
	cout<<"NO"<<endl;
	}
	return 0;
}
