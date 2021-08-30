#include <iostream>
using namespace std;
class Area {
public:
    double a = 0, b = 0, s = 0;
    virtual void area() = 0;
    virtual ~Area() {
        cout << "Площадь фигуры";
    }
};
class Rectangle :public Area {
public:
    double a = 5, b = 9, s = 0;
    virtual void area() {
        s = a * b;
        cout << "Площадь фигуры = " << s << endl;
    }
};
class Circle :public Area {
public:
    const double p = 3.14;
    double a = 5, s = 0;
    virtual void area() {
        s = p * a * a;
        cout << "Площадь фигуры = " << s << endl;
    }
};
class Rect_Triangle :public Area {
public:
    double a = 5, b = 9, s = 0;
    virtual void area() {
        s = ((a * b) / 2);
        cout << "Площадь фигуры = " << s << endl;
    }
};
class Trapeze :public Area {
public:
    double a = 5.0, b = 9.0, h = 4.0, s = 0;
    virtual void area() {
        s = (((a + b) * h) / 2);
        cout << "Площадь фигуры = " << s << endl;
    }

};
int main()
{

    setlocale(LC_ALL, "ru");
    Area* obj_e[4] = { new Rectangle, new Circle, new Rect_Triangle, new Trapeze };
    int action = 0;
    cout << "Выбирете тип фигуры: 1 - Прямоугольник, 2 - Круг, 3 - Прямоугольный треугольник, 4 - Трапеция->";
    cin >> action;
    obj_e[action - 1]->area();

    return 0;
}


/*3.	Создать абстрактный базовый класс с виртуальной
функцией — площадь. Создать производные классы:
прямоугольник, круг, прямоугольный треугольник,
трапеция со своими функциями площади. Для провер-
ки определить массив ссылок на абстрактный класс,
которым присваиваются адреса различных объектов.
Площадь трапеции: S=(a+b)h/2.*/