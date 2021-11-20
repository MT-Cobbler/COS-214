#include <iostream>
#include <algorithm>
#include <map>
#include <vector>

using namespace std;

class Ball {
    friend ostream& operator<<(ostream& os, const Ball& b);
    friend bool operator<(Ball const &b1, Ball const &b2); 
    public:
       Ball(int x, int y, int r) : x_(x), y_(y), radius_(r) {};
       int getRadius() {return radius_;};
       int getX() {return x_; };
       int getY() {return y_; };
 //      void setX(int x) {x_ = x;}; 
 //      void move(int x, int y) {x_= x; y_ = y;};
 //      void draw() { cout<<"Ball ("<<x_<<","<<y_<<","<<radius_<<")"<<endl;};
       void draw() { cout << *this << endl; };
      //...
    protected:
        int x_;
        int y_;  
      int radius_;
};

bool operator<(Ball const &b1, Ball const &b2){
    if ((b1.x_ < b2.x_) && (b1.x_ < b2.x_) && (b1.x_ < b2.x_))
        return true;
    else
        return false;        
}

ostream& operator<<(ostream& os, const Ball& b){
  os<<"Ball("<<b.x_<<","<<b.y_<<","<<b.radius_<<")";
  return os;
}

class Factory {
    public:
        Ball* getBall(int x, int y, int r);
        void activeBalls();
        //... definitely a function that decrements the reference counter
        
    private:
        map<Ball,int> db;
};

Ball* Factory::getBall(int x, int y, int r){
    Ball temp(x,y,r);
    db[temp]++;
    map<Ball, int>::iterator iter = db.find(temp);
    return const_cast<Ball*>(&(iter->first));  
}

void Factory::activeBalls(){
   map<Ball, int>::iterator iter;
   cout<<"The map:"<<endl;
   for (iter = db.begin(); iter != db.end(); iter++) {
      cout << "("<< iter->first << " : " << iter->second << ")" << endl;
  }    
}

  

class Screen {
    public:
        Screen(int x, int y) : xsize_(x), ysize_(y) {};
        void addBall(Ball* b);
        virtual void draw() = 0;
        //...Must also deleteBall so that it releases the resource
        // void deleteBall(Ball* b,Factory f);
    protected:
        int xsize_;
        int ysize_;
        vector<Ball*> balls;
        
};

void Screen::addBall(Ball* b) {
    balls.push_back(b);
}


class Picture : public Screen {
    public:
        Picture(int x, int y): Screen(x,y) {};
        void draw();
        //...  need a destructor          
};

void Picture::draw(){
    cout<<"Picture screen: "<< endl;
    for_each(balls.begin(), balls.end(), mem_fun(&Ball::draw));
    cout<<endl;
}


int main() {
    Factory ballFactory;
    Picture* p;
    Picture* p2;
    
    p  = new Picture(200,200);
    p->addBall(ballFactory.getBall(1,2,3));
    p->addBall(ballFactory.getBall(4,5,6));
    p->addBall(ballFactory.getBall(1,2,3));
    p->addBall(ballFactory.getBall(1,2,3));
    p->addBall(ballFactory.getBall(11,12,13));
    p->addBall(ballFactory.getBall(1,2,3));    
    p->addBall(ballFactory.getBall(4,5,6));

    p->draw();
    ballFactory.activeBalls();
    p->addBall(ballFactory.getBall(4,5,6));

 //   ballFactory.activeBalls();   
 //   p->updateX(5);

    p->draw();
    
    ballFactory.activeBalls();
    
    p2 = new Picture(50,50);
    
    p2->addBall(ballFactory.getBall(1,2,3));
    p2->addBall(ballFactory.getBall(4,5,6));
    p2->addBall(ballFactory.getBall(0,0,3));
    p2->addBall(ballFactory.getBall(0,0,3));
 
    p2->draw();
    
    ballFactory.activeBalls();

    p->addBall(ballFactory.getBall(0,0,3));

    ballFactory.activeBalls();

    cout<<"p..."<<endl;
    p->draw();
    cout<<"p2..."<<endl;
    p2->draw();
    
    
    delete p;
    delete p2;

    
    return 0;
}
