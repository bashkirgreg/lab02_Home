/*
#include <iostream>
using namespace std;

int main() {
    cout << "Hello world!";
    return 0;
}
*/

/*
#include <iostream>
using namespace std;

int main() {
    string name;
    cout << "Please enter your name: ";
    cin >> name;
    cout << "Hello world from @" << name << endl;
    return 0;
}
*/

/*
#include <iostream>

int main() {
    std::string name;
    std::cout << "Please enter your name: ";
    std::cin >> name;
    std::cout << "Hello world from @" << name << std::endl;
    return 0;
}
*/

// Подключение библиотеки ввода и вывода
#include <iostream>

// Главная функция
int main() {
    // Переменная для имени пользователя
    std::string name;

    // Вывод запроса на экран
    std::cout << "Please enter your name: ";

    // Ввод имени пользователя
    std::cin >> name;

    // Вывод приветствия с ранее указанным именем пользователя
    std::cout << "Hello world from @" << name << std::endl;

    // Завершение программы
    return 0;
}
