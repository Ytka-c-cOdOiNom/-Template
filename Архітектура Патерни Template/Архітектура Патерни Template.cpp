#include <iostream>
#include <windows.h>
using namespace std;

// Абстракція: базовий клас, що містить шаблонний метод
class Beverage {
public:
    // Шаблонний метод, що визначає порядок дій
    void prepareRecipe() {
        boilWater();
        brew();
        pourInCup();
        addCondiments();
    }

    // Спільні кроки, які не змінюються
    void boilWater() {
        cout << "Кип'ятимо воду." << endl;
    }

    void pourInCup() {
        cout << "Наливаємо напій в чашку." << endl;
    }

    // Чотири методи, які мають бути реалізовані в підкласах
    virtual void brew() = 0;  // Крок заварки
    virtual void addCondiments() = 0;  // Додавання добавок
};

// Конкретний клас для чаю
class Tea : public Beverage {
public:
    void brew() override {
        cout << "Заварюємо чай." << endl;
    }

    void addCondiments() override {
        cout << "Додаємо лимон." << endl;
    }
};

// Конкретний клас для кави
class Coffee : public Beverage {
public:
    void brew() override {
        cout << "Заварюємо каву." << endl;
    }

    void addCondiments() override {
        cout << "Додаємо цукор і молоко." << endl;
    }
};

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // Створюємо об'єкти напоїв
    Tea tea;
    Coffee coffee;

    // Готуємо чай
    cout << "Готуємо чай:" << endl;
    tea.prepareRecipe();
    cout << endl;

    // Готуємо каву
    cout << "Готуємо каву:" << endl;
    coffee.prepareRecipe();
    cout << endl;


}
