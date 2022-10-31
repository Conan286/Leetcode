class Solution {
public:
    int dayofmonth(int m,int y)
    {
        if(m==2)
        {
            if(y%400==0) return 29;
            else if(y%4==0&&y%100!=0)
                return 29;
            else return 28;
        }
        else if(m==4||m==6||m==9||m==11) return 30;
        else return 31;
    }
    int dayofyear(int y)
    {
        if(y%400==0) return 366;
            else if(y%4==0&&y%100!=0)
                return 366;
            else return 365;
    }
    string day(int n)
    {
        int x=(n)%7;
        switch(x)
        {
            case 4:
                return "Monday";
                break;
            case 5:
                return "Tuesday";
                break;
            case 6:
                return "Wednesday";
                break;
            case 0:
                return "Thursday";
                break;
            case 1:
                return "Friday";
                break;
            case 2:
                return "Saturday";
                break;
            case 3:
                return "Sunday";
                break;

        }
        return "";
    }
    string dayOfTheWeek(int d, int m, int y) {
        //1/1/1971 is Friday
        int n=0;
        if(y>1971)
            for(int i=1971;i<y;i++)
                n+=dayofyear(i);
        if(m>1)
            for(int i=1;i<m;i++)
                n+=dayofmonth(i,y);
        n+=d;
        return day(n);
    }
};
