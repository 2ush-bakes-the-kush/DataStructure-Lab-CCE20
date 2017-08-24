#include<iostream>

using namespace std;

class Time{
    int hh,mm,ss;
public:
    void read();
    void display();
    Time add(Time obj);
    Time sub(Time obj);
};
void Time::display(){
        cout<<hh<<":"<<mm<<":"<<ss;
    }
void Time::read(){
        cin>>hh>>mm>>ss;
}
Time Time::add(Time obj){
        Time objp;
        objp.ss=ss+obj.ss;
        objp.mm=objp.ss/60;
        objp.ss=objp.ss%60;
        objp.mm+=mm+obj.mm;
        objp.hh=objp.mm/60;
        objp.mm=objp.mm%60;
        objp.hh+=hh+obj.hh;
        objp.hh=objp.hh%24;
        return objp;
    }
Time Time::sub(Time obj){
        Time objp;
        if(obj.ss>ss){
            --mm;
            ss+=60;
         }
        objp.ss=ss-obj.ss;
        objp.ss=objp.ss%60;
        if(obj.mm>mm){
            --hh;
            mm+=60;
         }
        objp.mm=mm-obj.mm;
        objp.mm=objp.mm%60;
        objp.hh=hh-obj.hh;
        objp.hh=objp.hh%24;
        return objp;
    }
int main(){
        Time obj1,obj2,obj3,obj3;
        cout<<"Enter the first time";
        obj1.read();
        cout<<"Enter the second time";
        obj2.read();
        obj3=obj1.add(obj2);
        cout<<"Addition--> \n";
        obj3.display();
        obj3=obj1.sub(obj2);
        cout<<"Substraction-->";
        obj3.display();
    }

