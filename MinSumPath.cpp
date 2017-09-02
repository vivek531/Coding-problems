
//dynamic programming coding problem

int Solution::minPathSum(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    int nrow = A.size();
    int ncol = A[0].size();
    vector<vector<int> > solutionMatrix(nrow, vector<int>(ncol));
    
    for(int i = 0; i < nrow; i++){
        for(int j = 0; j < ncol; j++){
            if(i == 0){
                if(j == 0) solutionMatrix[i][j] = A[i][j];
                else solutionMatrix[i][j] = A[i][j] + solutionMatrix[i][j-1];
            }
            else if (j == 0) solutionMatrix[i][j] = A[i][j] + solutionMatrix[i-1][j];
            else {
                if(solutionMatrix[i][j-1] < solutionMatrix[i-1][j]) solutionMatrix[i][j] = A[i][j] + solutionMatrix[i][j-1];
                else solutionMatrix[i][j] = A[i][j] + solutionMatrix[i-1][j];
            }
        }
    }
    
    return solutionMatrix[nrow-1][ncol-1];
    
}
