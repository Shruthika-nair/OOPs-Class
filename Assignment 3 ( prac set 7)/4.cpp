/* Next Greater Element: For each element in an array, find the next greater element to
its right using a stack.*/

#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {

    int arr[] = {1, 3, 2, 28, 22, 24};
    int n = 6;

   
    vector<int> nge(n, -1);

  
    stack<int> st;

    for (int i = 0; i < n; i++) {
       
        while (!st.empty() && arr[i] > arr[st.top()]) {
            int idx = st.top();
            st.pop();
            nge[idx] = arr[i];
        }
        
        st.push(i);
    }

   
    cout << "Element -> NextGreater\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " -> " << nge[i] << "\n";
    }

    return 0;
}
