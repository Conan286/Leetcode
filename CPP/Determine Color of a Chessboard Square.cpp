class Solution {
public:
    bool squareIsWhite(string coordinates) {
        return(((int)(coordinates[0])+(int)(coordinates[1]))%2!=0);
    }
};
