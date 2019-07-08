#include <bits/stdc++.h>
using namespace std;

long long sum(vector<int> &array, int n)
{
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += array[i];
    }
    return sum;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, flag = 0, j = 0,val;
        vector<int> chef_coins, coin;
            scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&val);
            chef_coins.push_back(val);
        }

        long long sum1 = sum(chef_coins, n);
        float mean_original = sum1 / (float)n;

        float mean_new = 0;
        n = n - 1;
        for (int i = 0; i < n; i++)
        {

            mean_new = (sum1 - chef_coins[i]) / (float)n;

            if (mean_new == mean_original)
            {
                flag++;
                coin.push_back(i);
            
            }
        }
        if (flag == 0)
        {
            printf("Impossible\n");
        }
        else
        {

            sort(coin.begin(), coin.end());
            printf("%d\n", coin[0] + 1);
        }
    }
    return 0;
}