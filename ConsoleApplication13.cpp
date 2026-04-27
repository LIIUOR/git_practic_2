// ConsoleApplication13.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
struct Car
{
    string brand;
    string model;
    int year;
    int power;

    void printInfo() { cout << "brand: " << brand << " model: " << model << "\n" << "year: " << year << " power: " << power << endl; }
};
int findMostPowerful(Car cars[], int size) {
    int maxPowerIndex = 0;
    for (int i = 1; i < size; i++) {
        if (cars[i].power > cars[maxPowerIndex].power)maxPowerIndex = i;
    }
    return maxPowerIndex;
}
int main()
{
    setlocale(LC_ALL, "RU");
    const int size = 3;
    Car cars[3] = { {"toyota","camry",2020,200},
    { "hyundai","sonata",2019,150 },
     { "audi","q7",2018,333 },
    };
    int mostPowerIndex = findMostPowerful(cars, 3);
    cout << "Самый мощный автомобиль:" << endl;
    cout << "Марка:" << cars[mostPowerIndex].brand<<endl;
    cout << "Модель:" << cars[mostPowerIndex].model << endl;
    cout << "Год выпуска:" << cars[mostPowerIndex].year << endl;
    cout << "Мощность (л.с.):" << cars[mostPowerIndex].power << endl;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
