//Krishna Chhabaria
//24070123149
//B3
#include<iostream>
using namespace std;
class cube{
    public:
    int height=2.0;
    int width=3.0;
    int length=5.0;
};
int main(){
    cube c;
    int volume = c.height * c.width * c.length;
    cout << "Volume of the cube is: " << volume << endl;
    return 0;
}

/*output:
Volume of the cube is: 30
*/