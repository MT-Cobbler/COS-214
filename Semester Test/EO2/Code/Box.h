Compositegraphic::~CompositeGraphic(){
    list<Graphic*>::iterator it = _l.begin();
    for( ; it != _l.end(); ++it){
        delete *it;
    }
    delete _l;
}
DecoratorGraphic::~DecoratorGraphic(){
    list<Graphic*>::iterator it = _component.begin();
    for( ; it != _component.end(); ++it){
        delete *it;
    }
    delete _component;
}