#include <iostream>
using namespace std;
#include<vector>
#include<algorithm>

void rotate(vector < vector < int >> & matrix) {
    int n = matrix.size();
    //transposing the matrix
    for (int i = 0; i < n; i++) {
    for (int j = 0; j < i; j++) {
        swap(matrix[i][j], matrix[j][i]);
    }
    }
    //reversing each row of the matrix
    for (int i = 0; i < n; i++) {
    reverse(matrix[i].begin(), matrix[i].end());
    }
}

int main()
{
     vector<vector<int>>arr = {{1,2,3,4},
                               {5,6,7,8},
                               {9,10,11,12},
                               {13,14,15,16}
     };
    int n = arr.size()-1;
    int m = n;
    cout<<"before"<<endl;
    for (int i = 0; i < arr.size(); i++)  
    { 
        for (int j = 0; j < arr[i].size(); j++) 
        { 
            cout << arr[i][j] << " "; 
        }     
        cout << endl; 
    }
    /*for(int i = 0;i<4;i++){
        for(int j = 0;j<4;j++){
            if(i==n && j==m)
            break;
            swap(arr[i][j],arr[n][m]);
            n--;
        }
        reverse(arr,m);
        m--;
        n = arr.size()-1;
    }*/
    rotate(arr);
    cout<<"after"<<endl;

    for (int i = 0; i < arr.size(); i++)  
    { 
        for (int j = 0; j < arr[i].size(); j++) 
        { 
            cout << arr[i][j] << " "; 
        }     
        cout << endl; 
    }
    
    return 0;
}
