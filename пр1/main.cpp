#include <iostream>;
#include "vector.h";
#include "function.h";

using namespace std;

int main()
{
    MyVector Vector_1;
    MyVector Vector_2;
    MyVector Vector_3;
    double Const;

    Read(Vector_1, Vector_2, Vector_3,Const);

    cout << "Vector1 = ";
    Print(Vector_1);

    cout << "Vector2 = ";
    Print(Vector_2);

    cout << "Vector3 = ";
    Print(Vector_3);

    MyVector Res;

    cout << "Sum V1+V2 = ";
    Sum(Vector_1, Vector_2, Res);
    Print(Res);

    cout << "Sub V1-V2 = ";
    Sub(Vector_1, Vector_2, Res);
    Print(Res);

    cout << "VectorProduct [V1 x V2] = ";//векторное пр.век
    VectorProduct(Vector_1, Vector_2, Res);
    Print(Res);

    double ResDouble;
    DotProduct(Vector_1, Vector_2, ResDouble);//скалярное пр.век
    cout << "DotProduct V1 ^ V2 = " << ResDouble << endl;

    MyVector Help;
    MixedProduct(Vector_1, Vector_2, Vector_3, Help, ResDouble);//смешанное произведение ( [A x B] ^ C ) 
    cout << "MixedProduct: [V1 x V2] ^ V3 = " << ResDouble << endl;

    //умноржение на константу
    cout <<Const <<" * V1 = ";
    Scolar(Vector_1, Const, Res);
    Print(Res);

    cout <<Const<< " * V2 = ";
    Scolar(Vector_2, Const, Res);
    Print(Res);

    cout <<Const<< " * V3 = ";
    Scolar(Vector_3, Const, Res);
    Print(Res);

    return 0;
}