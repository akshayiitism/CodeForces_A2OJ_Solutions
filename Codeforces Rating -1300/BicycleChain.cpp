#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define pb push_back
#define pf push_front
#define eb emplace_back
#define loop(i,n) for(ll i=0;i<(n);i++)
#define FOR(i,a,b) for(ll i=(a);i<=(b);i++)
#define FORD(i,a,b) for(ll i=(a);i>=(b);i--)
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
using namespace std;
template <typename... T>
void read(T &...args) {
((cin >> args), ...);
}
/*****READ CONTAINER****/
template <typename T>
void readContainer(T &t) {
for (auto &e : t) {
read(e);
}
}
/******PRINT CONTAINER******/
template <typename... T>
void write(string delimiter, T &&...args) {
((cout << args << delimiter), ...);
}
template <typename T>
void writeContainer(string delimiter, T &t) {
for (const auto &e : t) {
write(delimiter, e);
}
write("\n");
}
/******DEBUGGER******/
#define deb(...) logger(#__VA_ARGS__,__VA_ARGS__)
template<typename ...Args>
void logger(string vars, Args&&... values) {
cout << vars << " = ";
string delim = "";
(..., (cout << delim << values, delim= ", "));
}
/*--------------------------------------------------*/
int main()
{
fastread();
    ll n,m;
    map<ll,ll,greater<ll>> gear;
    cin>>n;
    ll a[n];
    loop(i,n){cin>>a[i];}
    cin>>m;
    ll b[m];
    loop(i,m){cin>>b[i];}
    
    loop(i,n){
        loop(j,m){
            if(b[j] % a[i] == 0){
                //ll data = 
                gear[b[j]/a[i]]++;
            }
        }
    }
    /* for(auto i = gear.begin() ; i != gear.end() ; i++){
        cout<<i->first<< "  " << i->second<<endl;
    } */ 
    cout<<gear.begin()->second<<endl;
return 0;
}
