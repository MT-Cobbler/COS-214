#ifndef REMOTECONTROLVEHICLE_H
#define REMOTECONTROLVEHICLE_H
// Target
class RemoteControlVehicle
{
private:
    bool _on;

public:
    RemoteControlVehicle();
    virtual ~RemoteControlVehicle();
    virtual void on() = 0;
    virtual void off() = 0;
    virtual void forward() = 0;
    virtual void backward() = 0;
    bool getOn();
    void setOn(bool o);
};
#endif