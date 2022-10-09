#include <iostream>
#include "BitWiseOperator.cpp"
#include <unordered_set>
#include <set>
#include <unordered_map>
#include <map>
#include <queue>
#include <stack>
using namespace std;

int main()
{
    /*
        Example 1:
        Input: arr = {3,1,9,5,2}
        Output: 9
        Explanation: 9 is the maximum element.

    The maximum element can be found using the STL function *max_element().

    */

    vector<int>v{ 4,2,5,9,1 };
    cout << "The elements in the vector are: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    cout << "The maximum element is: " << *max_element(v.begin(), v.end());

    return 1;

}
