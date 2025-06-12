#include<iostream>
using namespace std;
class item {
static int count;
int number;

public:
    void setdata(int a){
        number = a;
        count++;

    }
    void getcount(void) const {
        cout<<"count:" ;
        cout<<count<<endl;

    }
};
int item :: count ;
int main(){
    item a,b,c;
    a.getcount( );
     b.getcount( );
      c.getcount( );

       a.setdata(10);
        b.setdata(20);
         c.setdata(30);
         cout<< "after reading data :" <<endl;
          a.getcount( );
           b.getcount( );
            c.getcount( );

            return (0);
}
