#include "vector.h";
#include <iostream>;
using namespace std;

void check(vectorDirection& a)
{
    double len = sqrt(a.x * a.x + a.y * a.y + a.z * a.z);
    a.x /= len;
    a.y /= len;
    a.z /= len;
}

void Read(MyVector& a, MyVector& b, MyVector& c, double& Const)
{
    cout << "enter the length of first vector: ";
    cin >> a.len;
    cout << "enter the coordinates of the first vector separated by a space (3): ";
    cin >> a.direction.x >> a.direction.y >> a.direction.z;
    check(a.direction);

    cout << "enter the length of second vector: ";
    cin >> b.len;
    cout << "enter the coordinates of the second vector separated by a space (3): ";
    cin >> b.direction.x >> b.direction.y >> b.direction.z;
    check(b.direction);

    cout << "enter the length of third vector: ";
    cin >> c.len;
    cout << "enter the coordinates of the third vector separated by a space (3): ";
    cin >> c.direction.x >> c.direction.y >> c.direction.z;
    check(c.direction);

    cout << "enter counst: ";
    cin >> Const;

    return;
}

void Print(MyVector& a) 
{
    cout << "( " << a.direction.x * a.len << " ; ";
    cout << a.direction.y * a.len << " ; ";
    cout << a.direction.z * a.len << " )" << endl;

    return;
}