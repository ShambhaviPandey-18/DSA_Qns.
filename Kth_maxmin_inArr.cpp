#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    vector<int> vec = {3, 6, 8, 4, 9};
    int k = 3;
    int kthMax = INT_MIN;
    for (int i = 0; i < k; i++)
    {
        int max = INT_MIN;
        for (int j = 0; j < vec.size(); j++)
        {
            if (vec[j] > max && vec[j] < kthMax)
            {
                max = vec[j];
            }
            if (i == 0 && vec[j] > max)
            {
                max = vec[j];
            }
        }
        kthMax = max;
    }
    cout << "KthMax = " << kthMax << endl;
}
