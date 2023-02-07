#pragma once

struct vectorDirection 
{
    double x;
    double y;
    double z;
};

struct MyVector 
{
    double len;
    vectorDirection direction;
};

void check(vectorDirection& a);

void Read(MyVector& a, MyVector& b, MyVector& Vector_3, double& Const);

void Print(MyVector& a);
