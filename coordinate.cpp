#include "coordinate.h"

Coordinate::Coordinate(int x, int y) : x(x), y(y) {}

Coordinate::Coordinate(const Coordinate& other) : x(other.x), y(other.y) {}

Coordinate& Coordinate::operator+=(const Coordinate& other) {
    x += other.x;
    y += other.y;
    return *this;
}

Coordinate& Coordinate::operator-=(const Coordinate& other) {
    x -= other.x;
    y -= other.y;
    return *this;
}

Coordinate Coordinate::operator+(const Coordinate& other) const {
    return Coordinate(x + other.x, y + other.y);
}

bool Coordinate::operator==(const Coordinate& other) const {
    return x == other.x && y == other.y;
}

bool Coordinate::IsValid() const {
    return x >= 0 && x < 8 && y >= 0 && y < 8;
}