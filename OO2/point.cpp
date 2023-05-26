#include "point.h"
#include <iostream>
#include <cstdio>

using namespace std;

double Point::getX() const {
    return x;
}

double Point::getY() const {
    return y;
}

double Point::getZ() const {
    return z;
}


void Point::input() {
    cout << "Enter the coordinates of the point (x, y, z): " << endl;
    cin >> x >> y >> z;
}

void Point::display() {
    cout << "Point coordinates: " << x << ", " << y << ", " << z << endl;
}

void Point::saveToFile(const char* filename) {
    FILE* file;
    if (fopen_s(&file, filename, "wb") == 0) {
        fwrite(&x, sizeof(double), 1, file);
        fwrite(&y, sizeof(double), 1, file);
        fwrite(&z, sizeof(double), 1, file);
        fclose(file);
        cout << "Data saved to file: " << filename << endl;
    }
    else {
        cout << "Error opening file." << endl;
    }
}

void Point::loadFromFile(const char* filename) {
    FILE* file;
    if (fopen_s(&file, filename, "rb") == 0) {
        fread(&x, sizeof(double), 1, file);
        fread(&y, sizeof(double), 1, file);
        fread(&z, sizeof(double), 1, file);
        fclose(file);
        cout << "Data loaded from file: " << filename << endl;
    }
    else {
        cout << "Error opening file." << endl;
    }
}

