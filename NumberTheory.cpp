// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// const ll MOD = 1e9+7;
// ll BIEX(ll n, ll m){
//    if(m==0){
//       return 1;
//    }
//    ll x = BIEX(n,m/2);
//    if(m&1){
//       return (n*(x*x)%MOD)%MOD;
//    }
//    else{
//       return (x*x)%MOD;
//    }
// }
// int main(){
//    ll n,m; cin>>n>>m;
//    ll res = BIEX(n,m);
//    cout<<res<<endl;
//    return 0;
// }


// using inverse function combination

// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// const ll MOD = 1e9+7;
// const ll N = 1e5+10;
// ll fact[N];
// ll faci[N];
// ll BIEX(ll n, ll m){
//    if(m==0){
//       return 1;
//    }
//    ll x = BIEX(n,m/2);
//    if(m&1){
//       return (n*((x*x)%MOD))%MOD;
//    }
//    else{
//       return (x*x)%MOD;
//    }
// }

// binary exponentiation using for loop
// ll BIEX(ll n, ll m){
//    ll res = 1;
//    ll cur = n;
//    while(m){
//       if(m&1){
//          res = (res*cur)%MOD;
//       }
//       cur=(cur*cur)%MOD;
//       m>>=1;
//    }
//    return res;
// }


// void result(){
//     fact[0] = 1;
//     for(ll i=1;i<N;i++){
//        fact[i] = i*fact[i-1];
//        fact[i]%=MOD;
//     }
//     faci[N-1] = BIEX(fact[N-1],MOD-2);
//     for(ll i=N-2;i>=0;i--){
//         faci[i] = ((i+1)*faci[i+1])%MOD;
//     }
// }

// int nCp(int n, int r){
//     if(n<r) return 0;
//     return (((fact[n]*faci[r])%MOD)*faci[n-r])%MOD;
// }

// int main(){
//    int n, r; cin>>n>>r; result();
//    cout<<nCp(n,r)<<endl;
//    return 0;
// }



// prime factorization of a number
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n; cin>>n;
//     vector<int>v;
//     int temp = n;
//     for(int i=2;i*i<=temp;i++){
//        if(n%i==0){
//          v.push_back(i);
//          while(n%i==0){
//             n/=i;
//          }
//        }
//     }
//     if(n>1) v.push_back(n);
//     for(auto &i : v) cout<<i<<" ";
//     return 0;
// }


// Sieve of Erathosthenes theorem
// #include<bits/stdc++.h>
// using namespace std;
// const int N = 1e5+5;
// int arr[N];
// int main(){
//    int n; cin>>n;
//    for(int i=2;i<N;i++){
//       arr[i] = 1;
//    }
//    for(int i=2;i*i<=n;i++){
//       if(arr[i]){
//         for(int j=i*i;j<=n;j+=i){
//           arr[j] = 0;
//         }
//       }
//    }
//    vector<int>v;
//    for(int i=2;i<=n;i++){
//       if(arr[i]){
//          v.push_back(i);
//       }
//    }
//    for(auto &i : v) cout<<i<<" ";
//    return 0;
// }



// (1+P+P^2+P^3+....+P^n) = (P^(a+1)-1)/(P-1);  this is a formula
















