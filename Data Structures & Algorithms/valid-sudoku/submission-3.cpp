class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n=board.size();
        for(int i=0; i<n; i++){
            unordered_set<char> rowSet;
            unordered_set<char> colSet;

            for(int j=0; j<n;j++){
                char row=board[i][j];
                char col=board[j][i];

                if(row != '.'){
                    if(rowSet.find(row)!=rowSet.end())
                        return false;
                    
                    rowSet.insert(row);
                }

                if(col != '.'){
                    if(colSet.find(col)!=colSet.end())
                        return false;
                    
                    colSet.insert(col);
                }
            }
        }

        for(int i=0; i<n; i+=3){
            for(int j=0; j<n; j+=3){

                unordered_set<char> boxSet;

                for(int k=i; k<i+3; k++){
                    for(int m=j; m<j+3; m++){
                        char box=board[k][m];
                        if(box!='.'){
                            if(boxSet.find(box)!=boxSet.end())
                                return false;
                            
                            boxSet.insert(box);
                        }
                    }
                }
            }
        }

        return true;
    }
};
