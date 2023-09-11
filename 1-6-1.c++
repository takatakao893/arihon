#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> a(N);
    for(int i=0; i<N; i++) cin >> a[i];
    int total_side=0;
    for(int i=0; i<N; i++){
        for(int j=i+1; j<N; j++){
            for(int k=j+1; k<N; k++){
                if(a[i]+a[j]>a[k] and a[i]+a[k]>a[j] and a[j]+a[k]>a[i]){
                    if (a[i]+a[j]+a[k]>total_side) total_side=a[i]+a[j]+a[k];
                }
            }
        }
    }
    cout << total_side << endl;
}