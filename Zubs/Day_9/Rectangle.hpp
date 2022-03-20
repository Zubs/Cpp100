# include "Point.hpp"

class Rectangle
{
    private:
        int top, left, bottom, right;
        Point upperLeft, upperRight, lowerRight, lowerLeft;

    public:
        Rectangle(int newTop, int newLeft, int newBottom, int newRight) {
            top = newTop;
            left = newLeft;
            bottom = newBottom;
            right = newRight;

            upperLeft.setX(left);
            upperLeft.setY(top);

            upperRight.setX(right);
            upperRight.setY(top);

            lowerLeft.setX(left);
            lowerLeft.setY(bottom);

            lowerRight.setX(right);
            lowerRight.setY(bottom);
        }

        ~Rectangle() {}

        int getTop() const {
            return top;
        }

        int getLeft() const {
            return left;
        }

        int getBottom() const {
            return bottom;
        }

        int getRight() const {
            return right;
        }

        Point getUpperLeft() const {
            return upperLeft;
        }

        Point getUpperRight() const {
            return upperRight;
        }

        Point getLowerRight() const {
            return lowerRight;
        }

        Point getLowerLeft() const {
            return lowerLeft;
        }

        void setUpperLeft(Point location) {
            upperLeft = location;
            top = location.getY();
            left = location.getX();
        }

        void setLowerLeft(Point location) {
            lowerLeft = location;
            bottom = location.getY();
            left = location.getX();
        }

        void setUpperRight(Point location) {
            upperRight = location;
            top = location.getY();
            right = location.getX();
        }

        void setLowerRight(Point location) {
            lowerRight = location;
            bottom = location.getY();
            right = location.getX();
        }

        void setTop(int newTop) {
            top = newTop;
            upperLeft.setY(top);
            upperRight.setY(top);
        }

        void setLeft(int newLeft) {
            left = newLeft;
            upperLeft.setX(left);
            lowerLeft.setX(left);
        }

        void setBottom(int newBottom) {
            bottom = newBottom;
            lowerLeft.setY(bottom);
            lowerRight.setY(bottom);
        }

        void setRight(int newRight) {
            right = newRight;
            upperRight.setX(right);
            lowerRight.setX(right);
        }

        int getArea() const {
            int width = right - left;
            int height = top - bottom;

            return width * height;
        }
};
