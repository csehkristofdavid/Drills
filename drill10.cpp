#include "std_lib_facilities.h"


  struct Point{
    int x;
    int y;
  };
istream& operator>>(istream& is, Point& p)
{
    char c1;
    if (is >> c1 && c1 != '(') {
       error("bad input1");
       }

    char c2;
    char c3;
    int x;
    int y;
     is >> x >> c2 >> y >> c3;
     if(!is || /*c2!=',' ||*/ c3!=')'){
        if(is.eof()){return is;}
        error("Bad input2");
     }
     p.x=x;
     p.y=y;
     return is;
 }
 ostream& operator<<(ostream& os, Point& p)
{
    return os << '(' << p.x << ',' << p.y << ')';
}
void number_dif(vector<Point> p1, vector<Point> p2){
    if(p1.size()!=p2.size()){cout<<"Something's wrong!"<<endl;}
}
  int main()
    try{

    vector<Point>original_points;
    vector<Point>processed_points;
    string s="My_Data";
    ofstream ost{s};
    if(!ost){error("Can't open My_Data.txt for writing");}
    cout<<"Please enter seven sets of x, y points(x,y)"<<endl;
    while(original_points.size()!=7){
        Point p;
        cin>>p;
        original_points.push_back(p);

    }
    cout<<"The original points are: "<<endl;
    for (Point p : original_points){
        cout << p <<endl;
    }
    for(Point p : original_points){
        ost<<p<<endl;
    }
    ost.close();
    ifstream ist{s};
    if(!ist){error("Can't open My_Data.txt for reading");}
    for(Point p; ist>>p;){
        processed_points.push_back(p);
    }
    cout<<"Processed points are: "<<endl;
    for (Point p : processed_points){
        cout << p <<endl;
    }
    number_dif(original_points,processed_points);
    return 0;
}
    catch (exception& e) {
            cerr << "Error: " << e.what() << '\n';
            return 1;
}