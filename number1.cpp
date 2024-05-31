#include <iostream>
using namespace std;

class Number1 {
    private:
    int y;

    public:
    void setNumber(int a) {
        y = a ;
    }
    int getNumber() {
        return y ;
     }
};
    class Number2 {
        public:
        int x;
    };
int main () {
    Number1 satu;
    Number2 dua;
    satu.setNumber(25);
    dua.x=30;

    cout << "y= " << satu.getNumber() << endl;
    cout << "x= " << dua.x << endl;
   
    
    return 0;
    
}
