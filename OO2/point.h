class Point {
private:
    double x;
    double y;
    double z;

public:
    double getX() const;
    double getY() const;
    double getZ() const;

    void input();

    void display();

    void saveToFile(const char* filename);

    void loadFromFile(const char* filename);
};