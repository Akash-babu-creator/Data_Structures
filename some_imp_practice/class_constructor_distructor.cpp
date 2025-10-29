#include<iostream>
using namespace std;
class rectangle
{
    private:
    int length;
    int breadth;
    public:
    rectangle()
    {
        int length=5;
        int breadth =2;

    }
    // _________________________CONCEPT OF OVERLOADED CONSTRUCTOR__________
    rectangle(int l,int b);
    int area();             //declration only..can define later usin scope resolution operator
    int perimeter();
    //Above three functions can be called as fascilator function(functions that perform operations on datamemebers)
    int get_length()
    {
        return length;
    }
    int  get_breadth()
    {
        return breadth;
    }
    //above two functions are accessor functions
    void set_length(int l)
    {
        length =l;
    }
    void set_breadth(int b)
    {
        breadth =b;
    }
//  above two functions are mutator functions
    
    ~rectangle();     //it's a disturctor funtion (if you have any dynamic memory allocation inside the constructor then you can release that memory using or inside the distructor)


};
rectangle::rectangle(int l,int b)
{
    length =l;
    breadth=b;

}
int rectangle::area()
{
    return length*breadth;
    
}
int rectangle :: perimeter()
{
    return 2*(length+breadth);
}
rectangle:: ~rectangle()
{
    cout<<"its a distructor"<<endl;
}
int main()
{
    // rectangle r;
    rectangle r(8,4);
    cout<<"area="<<r.area()<<endl;
    cout<<"perimeter="<<r.perimeter()<<endl;
    r.set_length(20);
    cout<<"length-"<<r.get_length()<<endl;
    cout<<"length-"<<r.get_breadth()<<endl;


    return 0;
}