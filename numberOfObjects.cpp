#include<iostream>

using namespace std ;

class Demo{
  private:
    static int count  ;
    int a, b ;
  public:
    Demo(){
        count ++ ; 
        a = 0 ; b = 0 ;
    }
    Demo(int x, int y){
        count ++ ;
        a = x ;
        b = y ;
    }
    ~Demo(){
        count -- ;
    }
    static int getCount(){
        cout << "Total nubmer of objects = " << count << endl ;
    }
};

int Demo:: count = 0 ;

int main(){
    cout << "Creating an object \n" ;
    Demo obj ;
    Demo::getCount();

    cout << "Creating 10 new objects \n" ;
    Demo *objPtr ;
    for(int i = 0 ;i < 10 ; i++){
        objPtr = new Demo;
    }
    Demo::getCount();

    cout << "Delete an object\n";
    delete(objPtr);
    Demo::getCount();

    return 0 ;
}