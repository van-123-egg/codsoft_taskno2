#include<iostream>
#include<map>
using namespace std;

int main()
{
    string hstr ,lstr,hgrade,lgrade;
    int maxn = 0,minl = 100,sum = 0,count = 0,p,avg;
    map<string,int>grades;
    grades["A+"] = 95;
    grades["A"] = 85;
    grades["B+"] = 75;
    grades["B"] = 65;
    grades["C"] = 55;
    grades["D"] = 45;
    grades["E"] = 35;
    string name,ch;
    int a;
    do
    {
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Enter your grade:";
    cin>>ch;
    for(auto& it : grades)
    {
        if(it.first == ch)
        {
        a = it.second;
        break;
        }
    }
    sum += a;
    count ++;
    if(a>maxn)
    {
        hstr = name;
        maxn = a;
        hgrade = ch;
    }
    if(a<minl)
    {
        lstr = name;
        minl = a;
        lgrade = ch;
    }
    cout<<"Do you want to enter more records? Type 1 for yes and 0 for No"<<endl;
    cin>>p;
    }
    while(p == 1);
    avg = sum/count;
    for(auto& it: grades)
    {
        if(avg%10 == 0)
        {
           if((avg/10)-1 == it.second/10)
           {
            cout<<"The average grade is:"<<it.first<<"\n";
            break;
           }
        }
        else
        {
            if(it.second/10 == avg/10)
            {
            cout<<"The average grade is:"<<it.first<<"\n";
            break;
            }
        }
    }
    cout<<"Highest grade is attained by:"<<hstr<<":"<<hgrade<<endl;
    cout<<"Lowest grade is attained by:"<<lstr<<":"<<lgrade<<endl;
}