#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, m;
    cin>>n>>m;

    vector<vector<int>> matrix(n, vector<int>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>matrix[i][j];
        }
    }
    int x, y;
    cin>>x>>y;

    int sumQ1=0, sumQ2=0, sumQ3=0, sumQ4=0;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(i<x && j>=y){
                sumQ1+=matrix[i][j];
            }
            else if(i<x && j<y){
                sumQ2+=matrix[i][j];
            }
            else if(i>=x && j<y){
                sumQ3+=matrix[i][j];
            }
            else{/*(i>=x && j>=y)*/
                sumQ4+=matrix[i][j];
            }
        }
    }
    cout<<sumQ1<<" "<<sumQ2<<" "<<sumQ3<<" "<<sumQ4<<endl;
    return 0;
}
/*input:
 2 3
5 7 8
1 2 3
1 1
output: 15 5 1 5


 */