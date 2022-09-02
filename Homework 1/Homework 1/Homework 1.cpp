#include <iostream>
#include <fstream>
using namespace std;
class Vector {
private:
    int x_coordinate;
    int y_coordinate;
public:
    
    Vector(){}
    Vector(int cordX, int cordY) {
        x_coordinate = cordX;
        y_coordinate = cordY;
    }
    ~Vector() {}
    int get_x_coord() {
        return x_coordinate;
    }

    int get_y_coord() {
        return y_coordinate;
    }

    void set_x_coord(int new_x_coord) {
        x_coordinate = new_x_coord;
    }

    void set_y_coord(int new_y_coord) {
        y_coordinate = new_y_coord;
    }

    void operator+(Vector add_vec) {
        x_coordinate = x_coordinate + add_vec.get_x_coord();
        y_coordinate = y_coordinate + add_vec.get_y_coord();
    }
    void operator-(Vector decr_vec) {
        x_coordinate = x_coordinate - decr_vec.get_x_coord();
        y_coordinate = y_coordinate - decr_vec.get_y_coord();
    }
    void operator/(int divider) {
        x_coordinate = x_coordinate / divider;
        y_coordinate = y_coordinate / divider;
    }
    void operator*(int multiplier) {
        x_coordinate = x_coordinate * multiplier;
        y_coordinate = y_coordinate * multiplier;
    }

    void operator+=(int add_coord) {
        x_coordinate = x_coordinate + add_coord;
        y_coordinate = y_coordinate + add_coord;
    }
    void operator-=(int decr_coord) {
        x_coordinate = x_coordinate - decr_coord;
        y_coordinate = y_coordinate - decr_coord;
    }
    void operator=(Vector copy_vector) {
        x_coordinate = copy_vector.get_x_coord();
        y_coordinate = copy_vector.get_y_coord();
    }
};


ostream& operator<<(ostream& os, Vector& out_vec){
        os << "координата X: " << out_vec.get_x_coord() << "\nкоордината Y: " << out_vec.get_y_coord() << endl;
        return os;
    }
istream& operator>>(istream& is, Vector& in_vec) {
    int temp_x;
    int temp_y;
    cout << "Введите координаты X и Y вектора" << endl;
    is >> temp_x;
    is >> temp_y;
    in_vec = Vector(temp_x, temp_y);
    return is;
}
int main()
{
    setlocale(LC_ALL, "Russian");
    Vector Vec1, Vec2, Vec3;
    char sign;
    int temp_number;
    cin >> Vec1;
    cin >> Vec2;
    cout << "Введите знак действия.";
    cin >> sign;
        switch (sign) {
        case '+':
            Vec1 + Vec2;
            cout << Vec1;
            break;
        case '-':
            Vec1 - Vec2;
            cout << Vec1;
            break;
        case '*':
            cin >> temp_number;
            Vec1 * temp_number;
            cout << Vec1;
            break; 
        case '/':
            cin >> temp_number;
            Vec1 / temp_number;
            cout << Vec1;
            break; 
        default:
            cout << "Ошибка!";
            break;
        }
    return 0;
}


