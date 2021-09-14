
/*
 Задача #1: Посчитать количество строчных (маленьких) и прописных (больших) букв в введенной строке. Учитывать только английские.
*/

#include <iostream>

using namespace std;

int countLittle = 0, countBig = 0;

int isLittle(char word) {
    if (word >= 'a' && word <= 'z')
        return countLittle = countLittle + 1;
    return countLittle;
};

int isBig(char word) {
    if (word >= 'A' && word <= 'Z')
        return countBig = countBig + 1;
    return countBig;
};

void Cout() {
    cout << "little words : " << countLittle << "\n" << "big words : " << countBig << endl;
}

int main() {
    char word;
    while (cin.get(word)&&(word != '\n'))
    {
        isLittle(word);
        isBig(word);
    }
    Cout();
    return 0;
}
