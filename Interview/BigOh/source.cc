#include<bits/stdc++.h>
using namespace std;

class automobile{
private:
    string fuel;
    bool imp;
public:
    void setFuel(string fuel)
    {
        this->fuel = fuel;
    }
    void setImported(bool isImported)
    {
        this->imp = isImported;
    }

    string getFuel()
    {
        return fuel;
    }
    bool isImported()
    {
        return imp;
    }
};

class car:public automobile{
private:
    string company;
    string name;
    string condition; 

public:
    car(){};
    car(string fuel, bool isImported, string company, string name, string condition){
        setFuel(fuel);
        setImported(isImported);
        this->company = company;
        this->name = name;
        this->condition = condition;
    }
    string getCompany()
    {
        return company;
    }
    string getName()
    {
        return name;
    }
    string getCondition()
    {
        return condition;
    }
};

class bike:public automobile{
private:
    string company;
    string name;
    string condition; 

public:
    bike(){};
    bike(string fuel, bool isImported, string company, string name, string condition){
        setFuel(fuel);
        setImported(isImported);
        this->company = company;
        this->name = name;
        this->condition = condition;
    }
    string getCompany()
    {
        return company;
    }
    string getName()
    {
        return name;
    }
    string getCondition()
    {
        return condition;
    }
};

class person{
private:
    string name;
    char gender;
    car Cars;
    bike Bikes;
public:
    person(){}
    void setName(string name)
    {
        this->name = name;
    }
    void setGender(char gender)
    {
        this->gender = gender;
    }
    void setCar(car Car)
    {
        this->Cars = Car;
    }
    void setBike(bike Bike)
    {
        this->Bikes = Bike;
    }

    string getName()
    {
        return name;
    }
    char getGender()
    {
        return gender;
    }
    void getCar()
    {
        cout<<"\tFuel: "<<Cars.getFuel()<<endl;
        cout<<"\tImported: ";
        if(Cars.isImported())
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
        cout<<"\tCompany: "<<Cars.getCompany()<<endl;
        cout<<"\tName: "<<Cars.getName()<<endl;
        cout<<"\tCondition: "<<Cars.getCondition()<<endl;
    }
    void getBike()
    {
        cout<<"\tFuel: "<<Bikes.getFuel()<<endl;
        cout<<"\tImported: ";
        if(Bikes.isImported())
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
        cout<<"\tCompany: "<<Bikes.getCompany()<<endl;
        cout<<"\tName: "<<Bikes.getName()<<endl;
        cout<<"\tCondition: "<<Bikes.getCondition()<<endl;
    }
};

int main()
{
    person person1;
    person1.setName("Sourabh");
    person1.setGender('M');
    car car1("Diesel", false, "Honda", "Accord", "New");
    person1.setCar(car1);
    bike bike1("Petrol", true, "Duccati", "Streetfighter", "Used");
    person1.setBike(bike1);

    cout<<"Details of the person1 is as mentioned below\n";
    cout<<"Name: "<<person1.getName()<<endl;
    cout<<"Gender: "<<person1.getGender()<<endl;
    cout<<"Details of Car of "<<person1.getName()<<" as follows:"<<endl;
    person1.getCar();
    cout<<"Details of Bike of "<<person1.getName()<<" as follows:"<<endl;
    person1.getBike();
    return 0;
}