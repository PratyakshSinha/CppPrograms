#ifndef BULLET_H
#define BULLET_H

#include <iostream>
#include <memory>

using namespace std;

class Bullet
{
protected:
    string _bulletName;
    float _speed;
    float _firePower;
    float _damage;
    float _direction;

public:
    Bullet();
    Bullet(string bulletName, float speed, float firepower, float damage);
    void fire(float direction);
    virtual ~Bullet(){}
    virtual unique_ptr<Bullet> clone() = 0;
};

class SimpleBullet : public Bullet {
public:
    SimpleBullet(string bulletName, float speed, float firepower, float damage);
    unique_ptr<Bullet> clone() override {
        return make_unique<SimpleBullet>(*this);
    }
};

class GoodBullet : public Bullet {
public:
    GoodBullet(string bulletName, float speed, float firepower, float damage);
    unique_ptr<Bullet> clone() override {
        return make_unique<GoodBullet>(*this);  
    }
};

#endif