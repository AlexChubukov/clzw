# Индивидуальное задание
Написать кросс-платформенную реализацию алгоритма сжатия LZW.

## Теоретическая часть
**LZW**(*Lempel-Ziv-Welch*) - универсальный алгоритм сжатия данных без потерь. Он был опубликован Велчем в 1984 году в качестве улучшенной реализации алгоритма LZ78, опубликованного Лемпелем и Зивом в 1978 году. Алгоритм разработан так, чтобы его было достаточно просто реализовать как программно, так и аппаратно.
Основная идея алгоритма заключается в кодировании фиксированным числом бит не только отдельные буквы, но целые слоги. Например символ 'a' можно закодировать последовательностью 0000, а слово 'ab' - 0101.
Таким образом, несмотря на то что общее количество бит на символ возрастает общая длинна закодированного слова уменьшается, так как этим же количеством битов кодируются целые слоги.
Уровень сжатия может достигать 50% и выше.

##  Достоинства и недостатки

  
**+** Не требует вычисления вероятностей встречаемости символов или кодов.  
**+** Для декомпрессии не надо сохранять таблицу строк в файл для распаковки. Алгоритм построен таким образом, что мы в состоянии восстановить таблицу строк, пользуясь только потоком кодов.  
**+** Данный тип компрессии не вносит искажений в исходный графический файл, и подходит для сжатия растровых данных любого типа.
**+** Алгоритм является однопроходным.
**-** Алгоритм не проводит анализ входных данных.

## Применение
Этот метод позволяет достичь одну из наилучших степеней сжатия среди других существующих методов сжатия графических данных, при полном отсутствии потерь или искажений в исходных файлах. В настоящее время испольуется в файлах формата TIFF, PDF, GIF, PostScript и других, а также отчасти во многих популярных программах сжатия данных (ZIP, ARJ, LHA).

## Подходы к решению задачи
Программа будет работать в соответствии с общеизвестными алгоритмами сжатия и декодирования. Алгоритм LZW, согласно описанию его создателей, имеет четки алкоритм сжатия и декодирования, согласно которому осуществялется.
#### Сжатие
Последовательно берутся символы(биты) из потока ввода. Дальше программа сравнивает, присутствует ли указанная последовательность символов в таблице сжатия. Если есть, то перется следующий символ, в противном случае берется код заданного символа, а данная последовательность добавляется в таблицу строк.
#### Декодирование
Для декодирования на вход подается только закодированный текст, поскольку алгоритм LZW может воссоздать соответствующую таблицу преобразования непосредственно по закодированному тексту. Алгоритм генерирует однозначно декодируемый код за счет того, что каждый раз, когда генерируется новый код, новая строка добавляется в таблицу строк. LZW постоянно проверяет, является ли строка уже известной, и, если так, выводит существующий код без генерации нового. Таким образом, каждая строка будет храниться в единственном экземпляре и иметь свой уникальный номер. Следовательно, при декодировании во время получения нового кода генерируется новая строка, а при получении уже известного, строка извлекается из словаря.

**Таблица строк** (*словарь*) - таблица, необходимая для сжатия и декодирования файлов, содержащая взаимооднозначно определенные пары: последовательности бит и слов.

|      Слово     |Биты 
|----------------|-------|
|a		 |00000  |
|b		 |00001  |
|...		 |...    |
|abc		 |01111  |
|...		 |...    |
|abde		 |011101 |
|...		 |...    |

# Описание программы
Программа кросс-платформенная, будет написанна на языке С++. Скорее всего будет использоваться unit тестирование.

## Сборка и компиляция
Для сборки будет использоваться ``make`` или ``cmake`` и соответствующие makefile`ы.
Запуск программы будет выглядеть следующим образом:

`$ ./clzw <входной файл> <выходной файл> -c -d`

**<выходной файл>** - выходной файл со сжатым содержимым. По умоланию сжатие производится в тот же файл, но с расширением .tiff. Если даный файл уже существует, то к названию файла добавляется численный парметр <входной файл>(0-9). например input1.tiff
Ключи являются опциональными.Надо решить, что лучше: предоставлять пользователю указывать флаги сжатия/декодирования или определять, что делать с файлом, по расширению файла.
 **-c**(*compression*) - флаг, указывающий, что файл необходимо сжать
 **-d**(*decoding*) - флаг, указывающий, что файл необходимо декодировать
## Формат входных-выходных файлов
На вход программе подается путь до файла, который необходимо сжать. Так как алгоритм подходит для сжатия любого вида файлов, то на вход можно подавать не только .txt файлы, но, к примеру, WAV, RAW и другие.

На выходе получается файл с расширение .tiff. Чтобы декодировать достаточно еще раз запустить программу, подав на вход уже сжатый файл и указав флаг `-d`