#include <iostream>
using namespace std;
class rectangle
{
private:
    int length;
    int breadth;

public:
    rectangle(int l, int b) // constructor
    {
        length = l;
        breadth = b;
    }
    int area()
    {
        return length * breadth;
    }
    void changelength(int l)
    {
        length = l;
    }
    int get_length()
    {
        return length;
    }
};
int main()
{
    rectangle r(10, 5);
    cout << r.area() << endl;
    r.changelength(20);
    cout << "alterd length = " << r.get_length() << endl;

    return 0;
}
