#include<bits/stdc++.h>
using namespace std;

int main(){
    int l,n;
    cin >> l;
    cin >> n;
    vector<int> x(n);
    for(int i=0; i<n; i++){
        cin >> x[i];
    }
    int minT=0;
    int maxT=0;
    for(int i=0; i<n; i++){
        minT = max(minT,min(x[i],l-x[i]));
    }
    for(int i=0; i<n; i++){
        maxT = max(maxT,max(x[i],l-x[i]));
    }
    cout << minT << " " << maxT << endl;
}