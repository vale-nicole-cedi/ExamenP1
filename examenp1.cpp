#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Circulo
{
private:
    float radio;

public:
    int X;
    int Y;
    Circulo();
    Circulo(int x2, int y2);
    Circulo (int x2, int y2, float r);

    float getRadio();
    void setRadio(float r);
    float getArea();
    void intersects (Circulo circulo);

};

int main ()
{
    Circulo circulo1;
    circulo1.X=1;
    circulo1.Y=2;
    circulo1.setRadio(6);

    Circulo circulo2;
    circulo2={3,5};
    circulo2.setRadio(10);

    Circulo circulo3;
    circulo3={40,30,3};

    cout<<"Circulo 1 area: " <<circulo1.getArea() << "u^2" <<endl;
    cout<<"Circulo 2 area: " << circulo2.getArea() << "u^2" <<endl;
    cout<<"Circulo 3 area: " << circulo3.getArea() << "u^2" <<endl;

    cout<< "Circulo 1 y 2: "; circulo1.intersects(circulo2);
    cout<< "Circulo 2 y 3: "; circulo2.intersects(circulo3);
    cout<< "Circulo 3 y 1: "; circulo3.intersects(circulo1);
    cout<<endl;

    return 0;
}

Circulo::Circulo()
{
    radio=0.0;
    X=0;
    Y=0;
}

Circulo::Circulo (int x2, int y2)
{
    radio=0.0;
    X=x2;
    Y=y2;

}

Circulo::Circulo(int x2, int y2, float r)
{
    if (r>0)
    {
        radio=r;
    }
    else
    {
        radio=0.0;
    }
    X=x2;
    Y=y2;
}

float Circulo::getRadio()
{
    return radio;
}

void Circulo::setRadio(float r)
{
    if (r>0)
    {
        radio=r;
    }
    else
    {
        radio=0.0;
    }

}

float Circulo::getArea()
{
    float area;
    area=(getRadio())*(getRadio())*3.14;
    return area;
}

void Circulo::intersects(Circulo circulo)
{
    float dist;
    float suma;
    dist=sqrt((circulo.X-X)*(circulo.X-X)+(circulo.Y-Y)*(circulo.Y-Y));
    suma=radio+circulo.getRadio();
    if (dist<suma)
    {
        cout<<"Los circulos intersectan"<<endl;
    }
    else
    {
        cout<<"Los circulos no intersectan"<<endl;
    }
}
