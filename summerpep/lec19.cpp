#include <bits/stdc++.h>
using namespace std;
int coinpred(vector<int> v, int i)
{
    if (v[i - 1] && v[i + 1])
    {
        return v[i] * v[i + 1] * v[i - 1];
    }
    else if (v[i - 1])
    {
        return v[i] * v[i - 1];
    }
    else if (v[i + 1])
    {
        return v[i] * v[i + 1];
    }
    else
    {
        return v[i];
    }
}



int maxcoins(vector<int> &v)
{
    int count = 0;

    for (;;)
    {
        if (v.empty())
        {
            break;
        }

        int size = v.size();
        vector<int> a;
        for (int i = 0; i < size; i++)
        {
            a.push_back(coinpred(v, i));
        }

        for(int i : a){
            cout<<i<<" ";
        }
        break;
        // int maxa = INT_MIN;
        // int maxindex = -1;

        // int index = 0;
        // for (int i : a)
        // {
        //     if (maxa < i)
        //     {
        //         maxa = i;
        //         maxindex = index;
        //     }
        //     index++;
        // }

        // count += a[index];
        // v.erase(v.begin() + index);
        // a.erase(a.begin() + index);
    }

    return count;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    // cout<<maxcoins(v);
    for(int i =0;i<n;i++){
        cout<<coinpred(v,i)<<" ";
    }
    return 0;
}