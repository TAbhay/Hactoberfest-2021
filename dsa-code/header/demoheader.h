class Rectangle
{
public:
    int length;
    int breadth;

    Rectangle(int length,int breadth){
        this->length=length;
        this->breadth=breadth;
    }

    int area(){
        return length*breadth;
    }
};
