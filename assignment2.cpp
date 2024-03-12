#include <iostream>
using namespace std;

class Volume
{
    int height;
    int width;
    int length;
    int res;

    public:
    void volume1(int height, int width, int length) 
    {
        this->height = height;
        this->width = width;
        this->length = length;
    }

    void show() 
    {
        res=height*width*length;
        cout<< "Volume is "<<res<<endl; 
    }
};

int main() 
{
    Volume v1;
    int n1, n2, n3, ch;
    do{
    cout << "1. Enter value of volume box" << endl;
    cout << "2. Result volume" << endl;
    cin >> ch;

    switch (ch) 
    {
        case 1:
            cout << "1. Enter the length" << endl;
            cin >> n1;
            cout << "2. Enter the width" << endl;
            cin >> n2;
            cout << "3. Enter the height" << endl;
            cin >> n3;

            v1.volume1(n1, n2, n3);
            break;
        case 2:
             v1.show();
            break;

        default:
            break;
    }
    }while (ch!=2);
    
  
    
}
