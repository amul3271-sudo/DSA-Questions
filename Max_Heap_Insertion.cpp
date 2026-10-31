#include <iostream>
#include <vector>
using namespace std;
void insert(vector<int>& heap, int value)
{
    heap.push_back(value);
    int index = heap.size() - 1;
    while (index > 0
           && heap[(index - 1) / 2] < heap[index]) {  
        swap(heap[index], heap[(index - 1) / 2]);
        index = (index - 1) / 2;
    }
}
int main()
{
    vector<int> arr;
    vector<int>values = { 10, 7, 11, 5, 4, 13 };
    int n = values.size();
    for (int i = 0; i < n; i++) {
        insert(arr, values[i]);
        cout << "Inserted " << values[i]
             << " into the max-heap: ";
        for (int j = 0; j < arr.size(); j++) {
            cout << arr[j] << " ";
        }
        cout << endl;
    }
    return 0;
}