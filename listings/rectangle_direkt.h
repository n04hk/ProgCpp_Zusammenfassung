class Rectangle
{
  public:
    void setA(double newA) {a = newA;}
    void setB(double newB) {b = newB;}
    double getA() const {return a;}
    double getB() const {return b;}
    double getArea() const {return a*b;}
  private:
    double a;
    double b;
};
