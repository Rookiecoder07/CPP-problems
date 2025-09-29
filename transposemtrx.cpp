#include<iostream>
#include<vector>
using namespace std;

class transpose{

    public:
vector<vector<int>> transposemtrx(vector<vector<int>>&matrix){

    int rows = matrix.size();
    int cols = matrix[0].size();

    vector<vector<int>> result(cols , vector<int>(rows,0));

    for(int i = 0; i< cols; i++){
        for(int j = 0; j<rows; j++){

            result[i][j]=matrix[j][i];
        }
    }

    return result;

}


};
 
int main() {

    vector<vector<int>> matrix = {
        {1, 2, 3},
        {3,9,7},
        {4, 5, 6}
    };

    transpose t;
    vector<vector<int>> result = t.transposemtrx(matrix);

    cout << "Transpose of matrix:\n";
    for (auto& row : result) {
        for (int x : row) cout << x << " ";
        cout << "\n";
    }

    return 0;
}