#include <iostream>

using namespace std;

int z1()
{
    setlocale(LC_ALL, "Russian");
    cout << "\nВведите первую оценку:";
    int a;
    cin >> a;
    cout << "\n\nВведите вторую оценку:";
    int b;
    cin >> b;
    cout << "\n\n\nВведите третью оценку:";
    int c;
    cin >> c;
    cout << "\n\n\n\nВведите четвертую оценку:";
    int d;
    cin >> d;
    cout << "\n\n\n\n\nВведите пятую оценку:";
    int f;
    cin >> f;
    int e = ((a + b + c + d + f) / 5);
    if (e >= 4) {
        cout << "допущен\t балл: " << e;
    }
    else {
        cout << "не допущен\t балл:" << e;
    }

    return 0;

}

int z2() {
    
    
}


int main() 
{
    z1();
    cout << "\t\t\t";

    return(0);
}