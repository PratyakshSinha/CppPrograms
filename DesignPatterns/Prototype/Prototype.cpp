#include "Bullet.hpp"
#include "BulletFactory.hpp"

int main() {
    BulletFactory bulletFactory;
    
    auto Bullet = bulletFactory.createBullet(SIMPLE);
    Bullet->fire(90);

    Bullet = bulletFactory.createBullet(GOOD);
    Bullet->fire(100);
}