#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin>>n>>m;
    vector<vector<int>>matrix(n, vector<int>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>matrix[i][j];
        }
    }
//    avg of all elements in the matrix
    int sum=0;
    int count=n*m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
           sum+=matrix[i][j];
        }
    }
    double avg=(double)sum/count;
//    find second largest elemtent in the matrix
vector<int> all_elems;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++) {
          all_elems.push_back(matrix[i][j]);
        }}
//  algorithms for sorting elems in desc order and to remove duplicates
    sort(all_elems.begin(), all_elems.end(), greater<int>());
    all_elems.erase(unique(all_elems.begin(), all_elems.end()), all_elems.end());
    int second_largest=-1;
    if(all_elems.size()>1){
        second_largest=all_elems[1];

        }
    cout << "Average: " << avg << endl;
    if (second_largest != -1) {
        cout << "Second largest element: " << second_largest << endl;
    } else {
        cout << "No second largest element (all elements might be equal)." << endl;
    }

    return 0;
}