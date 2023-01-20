#include <bits/stdc++.h>
using namespace std;
#define MULTIPLE_TEST_CASES 0
#define N 10000000007

vector<long long> fact(100001, 0);

long long binpow(long long a, long long b)
{
    if (b == 0) return 1;
    else if (b == 1) return a % N;
    long long half = binpow(a, b / 2);
    if (b % 2)
    {
        return (half * ((half * a) % N)) % N;
    }
    return (half * half) % N;
}

long long recurse(vector<int> &a, int l, int r, int p, int b, int lvl)
{
    int n = r - l + 1;
    if (n % 2 == 0)
    {
        lvl++;
    }
    if (p == b && b == 0)
    {
        if (lvl % 2 == 0)
        { // OR operation
            return recurse(a, 1, n / 2, 0, 0, lvl + 1) | recurse(a, n / 2 + 1, n, 0, 0, lvl + 1);
        }
    }
    long long retval = 0;
    int mid = l + (r - l) / 2;
    if (p < mid)
    {
        retval |= recurse(a, 1, n / 2, p, b, lvl + 1);
    }
    else
    {
    }
    
}

void test_case()
{
    int n, m;
    cin >> n >> m;
    int numElems = (int)pow(2, n) + 1;
    vector<int> a(numElems);
    for (int i = 1; i <= numElems; i++)
    {
        cin >> a[i];
    }
    void recurse(a, 1, n, 0, 0, 0);
    while (m--)
    {
        int p, b;
        cin >> p >> b;


    }
}

int main()
{
    int t = 1;
    if (MULTIPLE_TEST_CASES) cin >> t;
    while (t--) test_case();
}