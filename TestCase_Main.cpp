/*
                        ********************
                        **  MANAN DIYORA  **
                        **    DA-IICT     **
                        **   diyora13     **
                        ********************
*/
#include <bits/stdc++.h>
using namespace std;
#include <iostream>
#include <fstream>
#include <unistd.h>

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

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
 
ll getRand(ll l,ll r)
{
    uniform_int_distribution<ll> uid(l, r);
    return uid(rng);
}



int32_t main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);


    ll T=4; // total Input-Output files, you want to generate


    /*---------------------------------TEST CASE GENERATOR FILE RUN---------------------------------*/
   
    fr(t,0,T+1)
    {

        string sol_filename="TestCase_Generator";

        string build_s="g++ -o "+sol_filename+" "+sol_filename+".cpp";
        const char *build=build_s.c_str();
        system(build);

        string run_s=sol_filename+".exe "+to_string(t);
        const char *run=run_s.c_str();
        system(run);

    }

    




    /*---------------------------------CODE BUILD & RUN FOR EACH INPUT FILE---------------------------------*/

    fr(t,0,T+1)
    {

        string sol_filename="TestCase_Solution";    // Write solution file name without extension

        string build_s="g++ -o "+sol_filename+" "+sol_filename+".cpp";
        const char *build=build_s.c_str();
        system(build);

        string run_s=sol_filename+".exe "+to_string(t);
        const char *run=run_s.c_str();
        system(run);

    }


    return 0;
}