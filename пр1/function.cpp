#include <iostream>;
#include "function.h";
#include "vector.h";

void Sum(MyVector& a, MyVector& b, MyVector& res) 
{
    res.direction.x = a.direction.x * a.len + b.direction.x * b.len;
    res.direction.y = a.direction.y * a.len + b.direction.y * b.len;
    res.direction.z = a.direction.z * a.len + b.direction.z * b.len;

    res.len = sqrt(res.direction.x * res.direction.x + res.direction.y * res.direction.y + res.direction.z * res.direction.z);
    check(res.direction);
    return;
}

void Sub(MyVector& a, MyVector& b, MyVector& res)
{
    b.len *= -1;
    Sum(a, b, res);
    b.len *= -1;
    return;
}

//векторное пр.век
void VectorProduct(MyVector& a, MyVector& b, MyVector& res) 
{
    res.direction.x = a.direction.y * b.direction.z - a.direction.z * b.direction.y;
    res.direction.y = a.direction.z * b.direction.x - a.direction.x * b.direction.z;
    res.direction.z = a.direction.x * b.direction.y - a.direction.y * b.direction.x;

    res.len = sqrt(res.direction.x * res.direction.x + res.direction.y * res.direction.y + res.direction.z * res.direction.z);
    check(res.direction);
    return;
}

//скалярное пр.век
void DotProduct(MyVector& a, MyVector& b, double& res)
{
    res = a.direction.x * a.len * b.direction.x + a.direction.y * a.len * b.direction.y + a.direction.z * a.len * b.direction.z;
    return;
}

//смешанное произведение ( [A x B] ^ C ) 
void MixedProduct(MyVector& a, MyVector& b, MyVector& c, MyVector& Help, double& res)
{
    VectorProduct(a, b, Help);
    DotProduct(Help, c, res);
    return;
}

void Scolar(MyVector& a, double A, MyVector& res) 
{
    res.direction.x = a.direction.x * A;
    res.direction.y = a.direction.y * A;
    res.direction.z = a.direction.z * A;

    res.len = sqrt(res.direction.x * res.direction.x + res.direction.y * res.direction.y + res.direction.z * res.direction.z);
    check(res.direction);
    return;
}