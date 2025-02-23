#include <iostream>
using namespace std;
 

bool isSubsetSum(int set[], int n, int sum)
{
   
    // Base Cases
    if (sum == 0)
        return true;
    if (n == 0)
        return false;
 
    // If last element is greater than sum,
    // then ignore it
    if (set[n - 1] > sum)
        return isSubsetSum(set, n - 1, sum);
 

    return isSubsetSum(set, n - 1, sum)
           || isSubsetSum(set, n - 1, sum - set[n - 1]);
}

int main()
{
    int set[] = { 45,5,4,9,6,3};
    int sum = 9;
    int n = sizeof(set) / sizeof(set[0]);
    if (isSubsetSum(set, n, sum) == true)
         cout <<"Found a subset with given sum";
    else
        cout <<"No subset with given sum";
    return 0;
}
 
