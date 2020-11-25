class Solution {
public:
    bool validTicTacToe(vector<string>& board) {
        
        int xcount=0, ocount=0;
        for(int i=0; i<board.size(); i++)
        {
            for(auto c:board[i])
            {
                if(c=='X') xcount++;
                if(c=='O') ocount++;
            }
            
        }
            if(xcount!=ocount && ocount!=xcount-1)
                return false;
            if(win(board,'X') && ocount!=xcount-1)
                return false;
             if(win(board,'O') && xcount!=ocount)
                return false;
        
        return true;
        
    }
    
    bool win(vector<string>& board, char P)
    {
        for(int i=0; i<3; i++)
        {
            if(board[0][i]==P && board[1][i]==P && board[2][i]==P)
                return true;
            if(board[i][0]==P && board[i][1]==P && board[i][2]==P)
                return true;
        
            
        }
        if(board[0][0]==P && board[1][1]==P && board[2][2]==P)
            return true;
         if(board[0][2]==P && board[1][1]==P && board[2][0]==P)
             return true;
        
        return false;
        
        
    }
};
