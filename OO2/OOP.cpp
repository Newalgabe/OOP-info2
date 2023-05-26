#include "point.h"

int main() {
    Point point;

    point.input();

    point.display();

    point.saveToFile("point.txt");

    point.display();

    point.loadFromFile("point.txt");

    point.display();

    return 0;
}



