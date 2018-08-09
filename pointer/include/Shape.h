#ifndef SHAPE_H
#define SHAPE_H


class Shape
{
    int width, height;
    public:
        Shape();
        Shape(int,int);
        virtual ~Shape();
        int area(void);
        void set_values(int, int);

    protected:

    private:
};

#endif // SHAPE_H
