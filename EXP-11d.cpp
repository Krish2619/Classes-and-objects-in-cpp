//Krishna Chhabaria
//24070123149
//B3
#include<iostream>
using namespace std;
class cube{
    public:
    int height ;
    int width ;
    int length ;
public:
int inp(){
    cout << "Enter the height : " ;
    cin >> height;
    cout << "Enter the width : " ;
    cin >> width;
    cout << "Enter the length : " ;
    cin >> length;
}
    int volume(){
     int v=height*width*length;
    return v;
    }
void display(){
    int w=volume();
    cout<< "volume : "<<w;
}};
int main(){
    cube cube1;
    cube1.inp();
    cube1.display();
}

/*OUTPUT :
Enter the height : 6
Enter the width : 20
Enter the length : 5
Volume : 600
*/
