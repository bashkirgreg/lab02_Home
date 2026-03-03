# lab02_Home

Отчёт по домашнему заданию из второй лабораторной работы

## Homework

### Part I

1. Создайте пустой репозиторий на сервисе github.com (или gitlab.com, или bitbucket.com).
> Выполнил.
2. Выполните инструкцию по созданию первого коммита на странице репозитория, созданного на предыдещем шаге.
> Выполнил, использовав команду `git clone https://github.com/bashkirgreg/lab02_Home`:
```
Cloning into 'lab02_Home'...
remote: Enumerating objects: 3, done.
remote: Counting objects: 100% (3/3), done.
remote: Compressing objects: 100% (2/2), done.
remote: Total 3 (delta 0), reused 0 (delta 0), pack-reused 0 (from 0)
Receiving objects: 100% (3/3), done.
```
> А затем команду `cd lab02_Home`.
3. Создайте файл `hello_world.cpp` в локальной копии репозитория (который должен был появиться на шаге 2). Реализуйте программу **Hello world** на языке C++ используя плохой стиль кода. Например, после заголовочных файлов вставьте строку `using namespace std;`.
> Создал файл через `nano hello_world.cpp`, куда вставил такой код:
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
> Вот такой коммит у меня вышел `git commit -m "Fisrt Hello World"`, который выдал:
```
main f4b7d51] Fisrt Hello World
 1 file changed, 7 insertions(+)
 create mode 100644 hello_world.cpp
```
6. Изменитьте исходный код так, чтобы программа через стандартный поток ввода запрашивалось имя пользователя. А в стандартный поток вывода печаталось сообщение `Hello world from @name`, где `@name` имя пользователя.
> Поменял код в файле через `nano hello_world.cpp`, сделав его таким:
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
> Сделал коммит через `git commit -m "New Hello World"`, не добавляя `git add hello_world.cpp` перед ним, поскольку файл уже был добавлен однажды и до сих пор отслеживается Git-ом:
```
[main 9f719e7] New Hello World
 1 file changed, 13 insertions(+)
```
> PS: Потом проверил всё командой `git status`, которая выдала мне:
```
On branch main
Your branch is ahead of 'origin/main' by 2 commits.
  (use "git push" to publish your local commits)

nothing to commit, working tree clean
```
8. Запуште изменения в удалёный репозиторий.
> Запушил через команду `git push origin main`:
```
Enumerating objects: 7, done.
Counting objects: 100% (7/7), done.
Compressing objects: 100% (6/6), done.
Writing objects: 100% (6/6), 705 bytes | 54.00 KiB/s, done.
Total 6 (delta 1), reused 0 (delta 0), pack-reused 0
remote: Resolving deltas: 100% (1/1), done.
To https://github.com/bashkirgreg/lab02_Home
   80f5378..9f719e7  main -> main
```
9. Проверьте, что история коммитов доступна в удалёный репозитории.
> Проверил, коммиты присутствуют.

### Part II

**Note:** *Работать продолжайте с теми же репоззиториями, что и в первой части задания.*
1. В локальной копии репозитория создайте локальную ветку `patch1`.
> Создал и мгновенно переключился на новую ветку с помощью команды `git checkout -b patch1`:
```
Switched to a new branch 'patch1'
```
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
> Выполнил команду `git commit -m "Sans using namespace std"`:
```
[patch1 c876f17] Sans using namespace std
 1 file changed, 12 insertions(+)
```
> И команду `git push origin patch1`:
```
numerating objects: 12, done.
Counting objects: 100% (12/12), done.
Compressing objects: 100% (11/11), done.
Writing objects: 100% (12/12), 1.89 KiB | 1.89 MiB/s, done.
Total 12 (delta 2), reused 3 (delta 0), pack-reused 0
remote: Resolving deltas: 100% (2/2), done.
remote: 
remote: Create a pull request for 'patch1' on GitHub by visiting:
remote:      https://github.com/bashkirgreg/lab02_Home/pull/new/patch1
remote: 
To https://github.com/bashkirgreg/lab02_Home
 * [new branch]      patch1 -> patch1
```
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
> Выполнил команду `git commit -m "With comments"`:
```
[patch1 2b0cff5] With comments
 1 file changed, 23 insertions(+)
```
> И команду `git push origin patch1`:
```
Enumerating objects: 5, done.
Counting objects: 100% (5/5), done.
Compressing objects: 100% (3/3), done.
Writing objects: 100% (3/3), 694 bytes | 694.00 KiB/s, done.
Total 3 (delta 0), reused 0 (delta 0), pack-reused 0
To https://github.com/bashkirgreg/lab02_Home
   c876f17..2b0cff5  patch1 -> patch1
```
8. Проверьте, что новые изменения есть в созданном на **шаге 5** pull-request
> Проверил, всё на месте.
9. В удалённый репозитории выполните слияние PR `patch1 -> master` и удалите ветку `patch1` в удаленном репозитории.
> Выполнил.
10. Локально выполните **pull**.
> Поменял ветку с помощью `git checkout main`:
```
Switched to branch 'main'
Your branch is up to date with 'origin/main'.
```
> И потом запулил через `git pull origin main`:
```
remote: Enumerating objects: 19, done.
remote: Counting objects: 100% (17/17), done.
remote: Compressing objects: 100% (13/13), done.
remote: Total 13 (delta 2), reused 0 (delta 0), pack-reused 0 (from 0)
Unpacking objects: 100% (13/13), 6.94 KiB | 789.00 KiB/s, done.
From https://github.com/bashkirgreg/lab02_Home
 * branch            main       -> FETCH_HEAD
   9f719e7..4a35249  main       -> origin/main
Updating 9f719e7..4a35249
Fast-forward
 README.md       | 127 +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
 hello_world.cpp |  35 ++++++++++++++++++++++++++
 2 files changed, 162 insertions(+)
```
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
> Удалил с помощью команды `git branch -d patch1`:
```
Deleted branch patch1 (was 2b0cff5).
```

### Part III

**Note:** *Работать продолжайте с теми же репоззиториями, что и в первой части задания.*
1. Создайте новую локальную ветку `patch2`.
> Создал и мгновенно переключился на новую ветку с помощью команды `git checkout -b patch2`:
```
Switched to a new branch 'patch2'
```
2. Измените *code style* с помощью утилиты [**clang-format**](http://clang.llvm.org/docs/ClangFormat.html). Например, используя опцию `-style=Mozilla`.
> Устанавливаю стиль через `sudo apt install clang-format`, а затем применяю форматирование к файлу `hello_world.cpp` через команду `clang-format -style=Mozilla -i hello_world.cpp`.
3. **commit**, **push**, создайте pull-request `patch2 -> master`.
> Сначала `git commit -m "Clang-Fromat"`:
```
[patch2 c88b60a] Clang-Fromat
 1 file changed, 13 insertions(+), 11 deletions(-)
```
> Потом `git push origin patch2`:
```
Enumerating objects: 31, done.
Counting objects: 100% (31/31), done.
Compressing objects: 100% (30/30), done.
Writing objects: 100% (31/31), 9.64 KiB | 1.61 MiB/s, done.
Total 31 (delta 6), reused 3 (delta 0), pack-reused 0
remote: Resolving deltas: 100% (6/6), done.
remote: 
remote: Create a pull request for 'patch2' on GitHub by visiting:
remote:      https://github.com/bashkirgreg/lab02_Home/pull/new/patch2
remote: 
To https://github.com/bashkirgreg/lab02_Home
 * [new branch]      patch2 -> patch2
```
> А затем создаю pull-request `patch2 -> master`.
4. В ветке **master** в удаленном репозитории измените комментарии, например, расставьте знаки препинания, переведите комментарии на другой язык.

5. Убедитесь, что в pull-request появились *конфликтны*.

6. Для этого локально выполните **pull** + **rebase** (точную последовательность команд, следует узнать самостоятельно). **Исправьте конфликты**.

7. Сделайте *force push* в ветку `patch2`

8. Убедитель, что в pull-request пропали конфликтны. 

9. Вмержите pull-request `patch2 -> master`.
