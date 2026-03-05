#include <iostream>
using namespace std;
int main()
{
    // int a[]= {5, 3, 8, 4, 2}, temp[] = {0}, n = 5;
    int n, a[100], temp[100];
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 1; i < n; i = i * 2)
    {
        for(int l = 0; l < n - 1; l += 2 * i)
        {
            int mid  = l + i - 1;
            int r = l + 2 * i - 1;
            if(mid >= n - 1) continue;
            if(r >= n) r = n - 1;
            int i = l;
            int j = mid + 1;
            int k = l;
            while(i <= mid && j <= r){
                if(a[i] < a[j])
                    temp[k++] = a[i++];
                else
                    temp[k++] = a[j++];
            }
            while(i <= mid)
                temp[k++] = a[i++];
            while(j <= r)
                temp[k++] = a[j++];
            for(int p = l; p <= r; p++)
                a[p] = temp[p];
        }
    }
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}

