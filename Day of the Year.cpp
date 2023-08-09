class Solution {
public:

    int dom(int m,int y)
    {
    if(m==2)
    {
        if(y%400==0) return 29;
        if(y%4==0 and y%100!=0) return 29;
        return 28;
    }
        else if (m==1 or m==3 or m==5 or m==7 or m==8 or m==10 or m==12) return 31;
        else return 30;
    }
    int dayOfYear(string date) {
         string d,m,y;
        d=date.substr(8,2),m=date.substr(5,2),y=date.substr(0,4);
        int day=0,month=0,year=0;
        for(char i:d) day=day*10+i-'0';
        for(char i:m) month=month*10+i-'0';
        for(char i:y) year=year*10+i-'0';
        if(month<2) return day;
        int s=0;
        for(int i=1;i<month;i++)
                s+=dom(i,year);
        return s+day;

    }
};
