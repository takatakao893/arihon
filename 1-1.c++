#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    bool flag=false;
    cin >> n;
    cin >> m;
    vector<int> k(n);
    for(int i=0; i<n; i++) cin >> k[i];
    for(int a=0; a<n; a++){
        for(int b=0; b<n; b++){
            for(int c=0; c<n; c++){
                for(int d=0; d<n; d++){
                    if(k[a]+k[b]+k[c]+k[d]==m) flag=true;
                }
            }
        }
    }
    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
}