#include<iostream>
using namespace std;
class determining
{
    private :
        int a[4], i;
    public :
        void inputdata()
        {
            cout<<"Enter the IP address : \n";
            for ( i = 0; i < 4; i++)
            {
                cin>>a[i];
            }
            
        }
        void display()
        {
            cout<<"IP ADDRESS :"<<a[0]<<"."<<a[1]<<"."<<a[2]<<"."<<a[3]<<"\n";
        }   
        void class_()
        {
            if(a[0] >= 1 && a[0] < 126)
            {
                cout<<"The IP address is in class : A\n";
            }
        }
        void class_B()
        {
            if(a[0] >= 128 && a[0] >= 191)
            {
                cout<<"The IP address is in class : B"<<endl;
            }
            else if(a[0] >= 128 && a[0] < 191)
            {
                cout<<"The IP address is in class : B\n";
            }
            else if(a[0] >= 192 && a[0] < 223)
            {
                cout<<"The IP address is in class : C\n";
            }
            else if(a[0] >= 224 && a[0] <= 239)
            {
                cout<<"The IP address is in class : D\n";
            }
            else{
                cout<<".";
            }
        }
};
int main()
{
    determining obj;
    obj.inputdata();
    obj.display();
    obj.class_();
    return 0;
}