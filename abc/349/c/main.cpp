#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define ll int64_t
#define u32 uint32_t
#define u64 uint64_t
constexpr int dx[] = {-1,0,1,0};
constexpr int dy[] = {0,1,0,-1};
#define overload(_1,_2,_3,_4,name,...) name
#define _rep1(n) for(int i = 0; i < (n); i++)
#define _rep2(i,n) for(int i = 0; i < (n); i++)
#define _rep3(i,a,b) for(int i = (a); i < (b); i++)
#define _rep4(i,a,b,c) for(int i = (a); i < (b); i += (c))
#define rep(...) overload(__VA_ARGS__,_rep4,_rep3,_rep2,_rep1)(__VA_ARGS__)
#define srt(list) sort(list.begin(), list.end());
#define _rrep1(n) for(int i = (n) - 1; i >= 0; i--)
#define _rrep2(i,n) for(int i = (n) - 1; i >= 0; i--)
#define _rrep3(i,a,b) for(int i = (b) - 1; i >= (a); i--)
#define _rrep4(i,a,b,c) for(int i = (b) - 1; i >= (a); i -= (c))
#define rrep(...) overload(__VA_ARGS__,_rrep4,_rrep3,_rrep2,_rrep1)(__VA_ARGS__)
#define str string
void Main(){
    str s,t;
    cin>>s;
    cin>>t;
    size_t pos = t.find('X');
    if (pos != std::string::npos) { 
        t.erase(pos, 1);
    }
    rep(i,t.length){
        size_t poss = s.find('X');
        if (poss != std::string::npos) { 
            s.erase(poss, 1);
        }
        else{
            cout<<"No"<<endl;
            exit(0);
        }
    }
    cout<<"Yes"<<endl;
}

signed main(){
    cin.tie(0)->sync_with_stdio(false);
    cout << setprecision(10) << fixed;
    Main();
}