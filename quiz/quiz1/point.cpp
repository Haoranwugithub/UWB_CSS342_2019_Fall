class Point{
    int x;
    int y;
public:
    Point(int x, int y) : x(x), y(y) {}

	Point(Point & anotherPoint) { x = anotherPoint.x; y = anotherPoint.y; }
    
    // add an offset to the point
    void move(int deltaX, int deltaY) {
        x += deltaX;
        y += deltaY;
    }
};

int main() {
	// create a new Point object p1
	Point p1(1,2);

	// create a new Point object p2 from p1 
	Point p2(p1);
}
