class Solution {
public:
    int doy(int y)
    {
        if(y%400==0) return 366;
            else if(y%4==0 and y%100!=0) return 366;
            return 365;
    }
    int dom(int m,int y)
    {
        if(m==2) {
            if(y%400==0) return 29;
            else if(y%4==0 and y%100!=0) return 29;
            return 28;
        }
        else if(m==4||m==6||m==9||m==11) return 30;

        return 31;
    }
    int thy(int d,int m,int y)
    {
        if(m<2) return d;
        int s=0;
        for(int i=1;i<m;i++)
            s+=dom(i,y);
        return s+d;
    }
    int between(int d1,int m1,int y1,int d2,int m2,int y2)
    {
        if(y1!=y2)
        {
            //22-3-2021
            //12-1-2022
            int s=doy(y1)-thy(d1,m1,y1);
            for(int i=y1+1;i<y2;i++)
                s+=doy(i);
            return s+thy(d2,m2,y2);
        }
        else if(m1!=m2)
        {
            int s=dom(m1,y1)-d1;
            for(int i=m1+1;i<m2;i++) s+=dom(i,y1);
            return  s+d2;
        }
        else return abs(d2-d1);
    }
    int stoi(string s)
    {
        int x=0;
        int n=s.size();
        for(char i:s)
            x=x*10+i-'0';
        return x;
    }
    int daysBetweenDates(string date1, string date2) {
        int d1,d2,m1,m2,y1,y2;
        y1=stoi(date1.substr(0,4));
        y2=stoi(date2.substr(0,4));
        m1=stoi(date1.substr(5,2));
        m2=stoi(date2.substr(5,2));
        d1=stoi(date1.substr(8,2));
        d2=stoi(date2.substr(8,2));
        if(y1>y2 or (y1==y2 and m1>m2) ) {
            swap(y1,y2);
            swap(m1,m2);
            swap(d1,d2);
        }
        return between(d1,m1,y1,d2,m2,y2);
    }
};
