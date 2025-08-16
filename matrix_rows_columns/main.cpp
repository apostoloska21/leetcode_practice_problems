#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin>>n>>m;
    int matrix[100][100];

    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            cin>>matrix[i][j];


    int counter=0;
    for(int i=0; i<n; i++){
        int streak=0;
        bool found=false;
        for(int j=0; j<m; j++){
            if(matrix[i][j]==1)
                streak++;
            else
                streak=0;
            if(streak>=3){
                found= true;
                break;
            }
        }
        if(found) counter++;
    }
    for(int j=0; j<m; j++){
        int streak=0;
        bool found=false;
        for(int i=0; i<n; i++){
            if(matrix[i][j]==1)
                streak++;
            else streak = 0;
            if(streak>=3){
                found= true;
                break;
            }
        }
        if(found) counter++;
    }
    cout<<counter<<endl;
    return 0;
}
/*example:
 * input: 7 9
1 0 0 0 0 0 1 1 0
0 0 0 0 1 1 1 1 0
0 1 1 0 1 0 1 1 0
1 1 1 0 0 1 1 0 1
1 1 1 0 0 0 1 0 0
0 1 0 1 1 0 1 0 1
0 0 1 1 0 1 0 0 1

 output: 7*/