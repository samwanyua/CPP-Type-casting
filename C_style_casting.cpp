#include <iostream>

using namespace std;

int main()
{
    /*
    * C sytle casting
    * (data_type) Expression
    * //float to int
        (int) 3.4

    
    * */

   int b =3;
   int c = 2;
   float e = b/c;
    cout << e << endl; // will give an integer value

    cout << (float) c/b << endl; // float type

   float x = 2.000999;
   int y =2;

   cout << x + y << endl; //4.001
   cout << x / y << endl; //1.0005
    return 0;
}
