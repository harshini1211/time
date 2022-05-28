#include <iostream>
#include <iomanip>
using namespace std;
class Time{
    private:
        int seconds,h,m,s;
    public:
        void getTime(void),Seconds(void),displayTime(void);
};
void Time::getTime(void)
{
    cout << "Enter time:" << endl;
    cout << "Hours? ";
    cin >> h;
    cout << "Minutes? ";
    cin >> m;
    cout << "Seconds? ";
    cin >> s;
}
 
void Time::Seconds(void)
{
    seconds = h*3600 + m*60 + s;
}
 
void Time::displayTime(void)
{
    cout << "The time is = " << setw(2) << setfill('0') << h << ":"
                             << setw(2) << setfill('0') << m << ":"
                             << setw(2) << setfill('0') << s << endl;
    cout << "Time in total seconds: " << seconds;
}
 
int main()
{
    Time T;
    T.getTime();
    T.Seconds();
    T.displayTime();
     
    return 0;
}
