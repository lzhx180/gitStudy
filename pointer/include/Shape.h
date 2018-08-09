#ifndef SHAPE_H
#define SHAPE_H


class Shape
{

    public:
        int width, height;
        Shape();
        Shape(int,int);
        virtual ~Shape();
        void set_values(int, int);

    protected:

    private:
};



#endif // SHAPE_H
