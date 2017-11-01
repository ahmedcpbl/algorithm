#include <bits/stdc++.h>
using namespace std;
#define _ cin.tie(0);ios::sync_with_stdio(false);
#define ll long long
#define mp make_pair
#define pb push_back
#define F first
#define S second
#define sz(x) (int)(x).size()
#define all(x) (x).begin(),(x).end()

const ll oo = (ll) 1e18;
const int mod = (int) 1e9 + 7;
const double PI = acos((ll)-1.0);

class Task {
public:

    bool can(ll h){
        return false
    }
    
    void solve(std::istream& in, std::ostream& out){_
        ll lo = 0, hi = 1e14;
        while(lo<hi){
            ll mid = (lo+hi+1)>>1;
            if(can(mid)) lo = mid;
            else hi = mid-1;
        }
        out << lo << "\n";
    };
};


int main() {
	Task solver;
	std::istream& in(std::cin);
	std::ostream& out(std::cout);
	solver.solve(in, out);
	return 0;
}
