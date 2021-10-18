#include <iostream>

using namespace std;

class Graphic{

    public:
        virtual void addGraphic(Graphic* );
        virtual void print() = 0;
        Graphic();
        virtual ~Graphic();
};

#include <list>

class CompositeGraphic : public Graphic{
    public:
        CompositeGraphic();
        ~CompositeGraphic(){
            list<Graphic*>::iterator it = _l.begin();
            for( ; it != _l.end(); ++it){
                delete *it;
            }
        }
        void addGraphic(Graphic* g){
            _l.push_back(g);
        }
        void removeGraphic(Graphic* g){
            _l.remove(g);
        }
        void print(){
             list<Graphic*>::iterator it = _l.begin();
            for( ; it != _l.end(); ++it){
                (*it)->print();
            }
        }
    private:
        list<Graphic*> _l;
};

class Ellipse : public Graphic{
    private:
        int _x, _y, _rx, _ry;
    public:
        Ellipse(int a, int b, unsigned int c, unsigned int d){
            _x = a; _y = b;_rx = c; _ry = d;
        }
        void print(){
            cout << _x << ", " << _y << ", " << _rx << ", " << _ry << endl;
        }
        Ellipse(){
            _x = _y = _rx = _ry = 0;
        }
        ~Ellipse();
};

class GraphicDecorator : public Graphic{
    protected:
        Graphic* component;
    public:
        GraphicDecorator(Graphic* g){
            component = g;
        }
        void print(){
            component->print();
        }
        GraphicDecorator();
        virtual ~GraphicDecorator(){
            delete component;
        }
};

class Label : public GraphicDecorator{
    private:
        string label;
    public:
        Label(Graphic* g, string s){
            component = g;
            label = s;
        }
        void print(){
            cout << label << ": "; 
            GraphicDecorator::print();
        }
        Label(){
            component = NULL;
            label = "Label";
        }
};

class Box : public GraphicDecorator{
    private:
        string box;
    public:
        Box(Graphic* g, string s){
            component = g;
            box = s;
        }
        void print(){
            cout << box << ": "; 
            GraphicDecorator::print();
        }
        Box(){
            component = NULL;
            box = "Box";
        }
};


int main(){

    Ellipse* e1 = new Ellipse(42, 51, 69, 40);
    Ellipse* e2 = new Ellipse(16, 64, 86, 40);
    Ellipse* e3 = new Ellipse(1, 33, 7, 40);

    return 0;
}