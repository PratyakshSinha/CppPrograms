#include "Bullet.hpp"

Bullet::Bullet(){}

Bullet::Bullet(string bulletName, float speed, float firepower, float damage) : _bulletName(bulletName), _speed(speed), _firePower(firepower), _damage(damage){}

void Bullet::fire(float direction) {
    _direction = direction;
    cout << "Name        : " << _bulletName << endl;
    cout << "Speed       : " << _speed << endl;
    cout << "FirePower   : " << _firePower << endl;
    cout << "Damage      : " << _damage << endl;
    cout << "Direction   : " << _direction << endl << endl;
}

SimpleBullet::SimpleBullet(string bulletName, float speed, float firepower, float damage) : Bullet(bulletName, speed, firepower, damage){}

GoodBullet::GoodBullet(string bulletName, float speed, float firepower, float damage) : Bullet(bulletName, speed, firepower, damage){}
