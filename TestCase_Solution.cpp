/*
                        ********************
                        **  MANAN DIYORA  **
                        **    DA-IICT     **
                        **   diyora13     **
                        ********************
*/
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define setpre(x,d) fixed<<setprecision(d)<<x
#define fill(a,x) memset(a,x,sizeof(a));
#define inarr(a,n) for(ll i=0;i<n;i++) cin>>a[i];
#define outarr(a,n) for(ll i=0;i<n;i++) cout<<a[i]<<" "; cout<<endl;
#define fr(i,s,e) for(ll i=s;i<e;i++)
#define rf(i,s,e) for(ll i=s-1;i>=e;i--)
#define deb1(x) cout<<#x<<" : "<<x<<endl;
#define deb2(x,y) cout<<#x<<" : "<<x<<"\t"<<#y<<" : "<<y<<endl;
#define deb3(x,y,z) cout<<#x<<" : "<<x<<"\t"<<#y<<" : "<<y<<"\t"<<#z<<" : "<<z<<endl;
#define deb4(x,y,z,w) cout<<#x<<" : "<<x<<"\t"<<#y<<" : "<<y<<"\t"<<#z<<" : "<<z<<"\t"<<#w<<" : "<<w<<endl;
#define deb5(x,y,z,w,v) cout<<#x<<" : "<<x<<"\t"<<#y<<" : "<<y<<"\t"<<#z<<" : "<<z<<"\t"<<#w<<" : "<<w<<"\t"<<#v<<" : "<<v<<endl;
#define pb push_back
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
#define sz(v) (ll)(v.size())

typedef long long ll;   // only int (hide typedef & define ll int);  only ll (define int ll)
typedef long double lld;
typedef pair<ll,ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;

const ll MOD=1e9+7;
const ll inf=1e18;
const ll N=5e5+50;


int n,child_size[N],parent[N];
vector<int> v[N];


int dfs(int now,int par)
{
    parent[now]=par;
    int nowsz=1;

    for(auto to:v[now])
        if(to!=par)
            nowsz+=dfs(to,now);

    return child_size[now]=nowsz;
}




int32_t main(int argc, char *argv[])
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    string in_s="input"+to_string(atoi(argv[1]))+".txt";
    const char *input=in_s.c_str();

    string out_s="output"+to_string(atoi(argv[1]))+".txt";
    const char *output=out_s.c_str();

    string status_s="status.txt";
    const char *status=status_s.c_str();
    ofstream file_in(status);
    file_in<<"GENERATING SOLUTION FOR TEST CASE "<<to_string(atoi(argv[1]))<<"...";

    #ifndef ONLINE_JUDGE
    freopen(input,"r",stdin); 
    freopen(output,"w",stdout); 
    #endif


    cin>>n;
        for(int i=0;i<n-1;i++)
        {
            int x,y; cin>>x>>y;
            v[x].push_back(y);
            v[y].push_back(x);
        }

        dfs(1,-1);

        for(int i=1;i<=n;i++)
        {
            vector<int> tmp;
            int sum=0;

            for(auto j:v[i])
                if(j!=parent[i])
                    tmp.push_back(child_size[j]),sum+=child_size[j];
            if(i!=1)
                tmp.push_back(n-sum-1);

            sort(tmp.begin(),tmp.end());

            for(int j=0;j<(int)tmp.size();j++)
                cout<<tmp[j]<<" ";
            cout<<endl;
        }

    return 0;
}