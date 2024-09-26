#include <iostream>
using namespace std;
int main()
{
    float a, b, c, d, promedio = 0;
    cout << "porfavor ingrese 4 notas\n";
    cin >> a >> b >> c >> d;
    promedio = (a + b + c + d) / 4;
    cout << "promedio es " << promedio << endl;
    if (promedio >= 60.0f)
    {
        cout << "aprobado " << promedio;
    }
    else if (promedio >= 50.0f && promedio <= 59.99  )
    {
        cout << "casi aprobado " << promedio;
    }

    else
    {
        cout << "reprobado " << promedio << endl;
    }
    return 0;
}