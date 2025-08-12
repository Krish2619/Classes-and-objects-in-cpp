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
}};
int main(){
    cube cube1;
    cube1.inp();
    int vol=cube1.volume();
    cout<< "Volume : "<<vol <<endl;
}

/*OUTPUT :
Enter the height : 6
Enter the width : 20
Enter the length : 5
Volume : 600
*/
