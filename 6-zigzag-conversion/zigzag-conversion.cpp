class Solution 
{
    int findColumns (string s, int row)
    {
        int i = 0, n = s.size(), col = 0;
        if (row >= 3)
        {
            while (i < n)
            {
                for (int j = 0; j < row and i < n; j++) i++;
                col++;
                for (int j = 0; j < row - 2 and i < n; j++)
                {
                    col++;
                    i++;
                }
            }
        }
        else
        {
            col = (row == 1 ? n : ceil(n / 2.0));
        }
        return col;
    }

    void make_zigzag (vector <vector <char>> &mat, string s)
    {
        int i = 0, n = s.size();
        int row = mat.size(), col = mat[0].size(), c = 0;
        if (row >= 3)
        {
            while (i < n)
            {
                for (int j = 0; j < row and i < n; j++) 
                {
                    mat[j][c] = s[i];
                    i++;
                }
                c++;
                for (int j = 0; j < row - 2 and i < n; j++)
                {
                    mat[row - 2 - j][c] = s[i];
                    i++;
                    c++;
                }
            }
        }
        else 
        {
            if (row == 1) 
            {
                for (int j = 0; j < n; j++)
                    mat[0][j] = s[j];
            }
            else 
            {
                for (i = 0, c = 0; i < n; i += 2, c++) mat[0][c] = s[i];
                for (i = 1, c = 0; i < n; i += 2, c++) mat[1][c] = s[i];
            } 
        }
    }

    string view_zigzag (vector <vector <char>> &mat)
    {
        string ans;
        for (int i = 0; i < mat.size(); i++)
        {
            for (int j = 0; j < mat[0].size(); j++)
            {
                if (mat[i][j] != '\0')
                {
                    ans += mat[i][j];
                }
            }
        }
        return ans;
    }

public:

    string convert (string s, int numRows) 
    {
        int numCols = findColumns (s, numRows);
        vector <vector <char>> my_Grid (numRows, vector <char> (numCols, '\0'));
        make_zigzag (my_Grid, s);
        
        // for (int i = 0; i < numRows; i++)
        // {
        //     for (int j = 0; j < numCols; j++)
        //     {
        //         cout << my_Grid[i][j] << " ";
        //     }
        //     cout << endl;
        // }

        return view_zigzag(my_Grid);
    }
};