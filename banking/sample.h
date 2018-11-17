
class Sample {
  int x;
  int y;
  public:
  Sample(int p) {
     x=p;
     y=0;
  }
  void display() {
    std::cout << x << "," << y << "\n";
  }  
};
