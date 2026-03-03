# lab02_Home

Отчёт по домашнему заданию из второй лабораторной работы

## Homework

### Part I

1. Создайте пустой репозиторий на сервисе github.com (или gitlab.com, или bitbucket.com).
> Выполнил.
2. Выполните инструкцию по созданию первого коммита на странице репозитория, созданного на предыдещем шаге.
> Выполнил, использовав команды `git clone` и `cd`.
3. Создайте файл `hello_world.cpp` в локальной копии репозитория (который должен был появиться на шаге 2). Реализуйте программу **Hello world** на языке C++ используя плохой стиль кода. Например, после заголовочных файлов вставьте строку `using namespace std;`.
> Создал файл через `nano`, куда вставил такой код:
```
#include <iostream>
using namespace std;

int main() {
    cout << "Hello world!";
    return 0;
}
```
4. Добавьте этот файл в локальную копию репозитория.
> Добавил через команду `git add hello_world.cpp`.
5. Закоммитьте изменения с *осмысленным* сообщением.
> Вот такой коммит у меня вышел `git commit -m "Fisrt Hello World"`.
6. Изменитьте исходный код так, чтобы программа через стандартный поток ввода запрашивалось имя пользователя. А в стандартный поток вывода печаталось сообщение `Hello world from @name`, где `@name` имя пользователя.
> Поменял код в файле через `nano`, сделав его таким:
```
#include <iostream>
using namespace std;

int main() {
    string name;
    cout << "Please enter your name: ";
    cin >> name;
    cout << "Hello world from @" << name << endl;
    return 0;
}
```
7. Закоммитьте новую версию программы. Почему не надо добавлять файл повторно `git add`?
> Сделал коммит через `git commit -m "New Hello World"`, не добавляя `git add hello_world.cpp` перед ним, поскольку файл уже был добавлен однажды и до сих пор отслеживается Git-ом.
8. Запуште изменения в удалёный репозиторий.
> Запушил через команду `git push origin main`.
9. Проверьте, что история коммитов доступна в удалёный репозитории.
> Проверил, коммиты присутствуют.

### Part II

**Note:** *Работать продолжайте с теми же репоззиториями, что и в первой части задания.*
1. В локальной копии репозитория создайте локальную ветку `patch1`.
> Создал и мгновенно переключился на новую ветку с помощью команды `git checkout -b patch1`.
2. Внесите изменения в ветке `patch1` по исправлению кода и избавления от `using namespace std;`.
> Внёс изменения через `nano hello_world.cpp`, куда поместил такой код:
```
#include <iostream>

int main() {
    std::string name;
    std::cout << "Please enter your name: ";
    std::cin >> name;
    std::cout << "Hello world from @" << name << std::endl;
    return 0;
}
```
3. **commit**, **push** локальную ветку в удалённый репозиторий.
> Выполнил действия, как и в прошлых пунктах, назвав коммит `Sans using namespace std`.
4. Проверьте, что ветка `patch1` доступна в удалёный репозитории.
> Проверил, всё на месте.
5. Создайте pull-request `patch1 -> master`.
> Создал.
6. В локальной копии в ветке `patch1` добавьте в исходный код комментарии.
> Внёс изменения через `nano hello_world.cpp`, куда поместил такой код:
```
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

```
7. **commit**, **push**.
> Выполнил действия, как и в прошлых пунктах, назвав коммит `With comments`.
8. Проверьте, что новые изменения есть в созданном на **шаге 5** pull-request
> Проверил, всё на месте.
9. В удалённый репозитории выполните  слияние PR `patch1 -> master` и удалите ветку `patch1` в удаленном репозитории.
> Выполнил.
10. Локально выполните **pull**.
> Выполнил с помощью команд `git checkout main` и `git pull origin main`.
11. С помощью команды **git log** просмотрите историю в локальной версии ветки `master`.
> Предоставляю историю в локальной версии основной ветки, где в каждом пунтке на всякий случай убрал личную почту:
<details>
<summary>Мой Git Log</summary>

```sh
commit 4a3524979dc39c794a2b336db50acff37b4eeb27 (HEAD -> main, origin/main, origin/HEAD)
Merge: 964d76a 2b0cff5
Author: Ge0rga4oK789 <email>
Date:   Tue Mar 3 19:07:37 2026 +0300

    Merge pull request #2 from bashkirgreg/patch1
    
    With comments (Final)

commit 964d76a5fe37c2c00f6e3c958a1d8dd145112b15
Author: Ge0rga4oK789 <email>
Date:   Tue Mar 3 19:04:43 2026 +0300

    Update README.md

commit 2b0cff58e648dc354c6f7bf52794af8b909a1305 (origin/patch1, patch1)
Author: bashkirgreg <email>
Date:   Tue Mar 3 19:03:29 2026 +0300

    With comments

commit c4bb6d835f97bc22a8c9c195c9894ee468d779ca
Merge: d5064b5 c876f17
Author: Ge0rga4oK789 <email>
Date:   Tue Mar 3 18:51:22 2026 +0300

    Merge pull request #1 from bashkirgreg/patch1
    
    Sans using namespace std

commit d5064b5d19fb11d4ccc720197ea933e7ad9b72e6
Author: Ge0rga4oK789 <email>
Date:   Tue Mar 3 18:37:56 2026 +0300

    Update README.md

commit c876f170f49e36792d697ce613f6d66fac3c68f1
Author: bashkirgreg <email>
Date:   Tue Mar 3 18:34:03 2026 +0300

    Sans using namespace std

commit 7ff622fb4a24fb9212811855bca82df1ff21830e
Author: Ge0rga4oK789 <email>
Date:   Tue Mar 3 18:19:13 2026 +0300

    Update README.md

commit 9f719e75eb347edd3c42c0f7c835e185dfaa1f04
Author: bashkirgreg <email>
Date:   Tue Mar 3 18:06:48 2026 +0300

    New Hello World

commit f4b7d5173fc155a570a8515110b07991bba494d4
Author: bashkirgreg <email>
Date:   Tue Mar 3 17:55:22 2026 +0300

    Fisrt Hello World

commit 80f5378e21803369e9ae6bb08cd4b2517a990d31
Author: Ge0rga4oK789 <email>
Date:   Tue Mar 3 17:38:34 2026 +0300

    Initial commit
```

</details>

12. Удалите локальную ветку `patch1`.
> Удалил с помощью команды `git branch -d patch1`.

### Part III

**Note:** *Работать продолжайте с теми же репоззиториями, что и в первой части задания.*
1. Создайте новую локальную ветку `patch2`.

2. Измените *code style* с помощью утилиты [**clang-format**](http://clang.llvm.org/docs/ClangFormat.html). Например, используя опцию `-style=Mozilla`.

3. **commit**, **push**, создайте pull-request `patch2 -> master`.

4. В ветке **master** в удаленном репозитории измените комментарии, например, расставьте знаки препинания, переведите комментарии на другой язык.

5. Убедитесь, что в pull-request появились *конфликтны*.

6. Для этого локально выполните **pull** + **rebase** (точную последовательность команд, следует узнать самостоятельно). **Исправьте конфликты**.

7. Сделайте *force push* в ветку `patch2`

8. Убедитель, что в pull-request пропали конфликтны. 

9. Вмержите pull-request `patch2 -> master`.
