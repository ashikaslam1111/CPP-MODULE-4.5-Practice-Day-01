/*#include<bits/stdc++.h>
using namespace std;
class person
{
public:
    string name;
    person *father,*mother;
    void prinfo()
    {
        cout<<"name="<<name<<" "<<"fathers name="<<father->name<<" "<<"mothers name="<<mother->name;
    }
};
int main()
{
    person s;
    s.name="aslam";
    s.father=new person;
    s.mother=new person;
    s.father->name="he";
    s.mother->name="she";
    s.prinfo();
    return 0;
}
*/
/*
#include<bits/stdc++.h>
using namespace std;
class info
{
public:
    string name;
private:
    int roll;
public:
    void setrr(int r)
    {
        roll=r;
    }
    void prin()
    {
        cout<<"roll="<<roll<<" "<<"name="<<name;
    }
};
int main()
{
    info s;
    s.name="aslam";
    s.setrr(12);
    s.prin();
    return 0;
}
*/
/*
#include<bits/stdc++.h>
using namespace std;
class stud
{
public:
    int id;
    string name;
    stud(int roll,string name)
    {
        id=roll;
        this->name=name;
    }
    void sho()
    {
        cout<<"Name="<<name<<" "<<"rol="<<id;
    }
};
int main()
{
    stud s(12,"aslam");
    s.sho();
    return 0;
}
*/
/*
#include<bits/stdc++.h>
using namespace std;
class person
{
public:
    string name;
    person *father,*mother;
    person()
    {
        father=NULL;
        mother=NULL;
    }
    person(string name,string f_name,string m_name)
    {
        this->name=name;
        father=new person;
        mother =new person;
        father->name=f_name;
        mother->name=m_name;
    }
    void prinfo()
    {
        cout<<"name="<<name<<" "<<"fathers name="<<father->name<<" "<<"mothers name="<<mother->name;
    }
    ~person()
    {
        if(father!=NULL)delete father;
        if(mother!=NULL)delete mother;
    }
};
int main()
{
    person s("aslam","jamil","anna");
    s.prinfo();
    return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;
class cuboid
{
public:
    int l,w,h,v,a;
};
class volume:cuboid
{
public:
volume:
    cuboid(int len,int gro,int high)
    {
        l=len;
        w=gro;
        h=high;
    }
    int  vl=l*w*h;
    void print()
    {
        cout<<vl;
    }
};
int main()
{
volume:
    cuboid s(1,3,4);

    return 0;
}
