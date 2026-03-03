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

// Подключение встроенной библиотеки ввода и вывода
#include <iostream>

// Главная, то есть основная функция
int
main()
{
  // Переменная для хранения уникального имени пользователя
  std::string name;

  // Вывод запроса на экран нашего терминала
  std::cout << "Please enter your name: ";

  // Ввод имени пользователя с помощью клавиатуры
  std::cin >> name;

  // Вывод приветствия с ранее указанным именем пользователя, которую мы будем
  // видеть на экране
  std::cout << "Hello world from @" << name << std::endl;

  // Завершение нашей программы
  return 0;
  // Элемент хаоса для возникновения конфликтов будет заключаться в
  // использовании лишних слов
}
