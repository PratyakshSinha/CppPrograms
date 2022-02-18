#include<bits/stdc++.h>

using namespace std;
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)

class Box{
    private:
        int length, breadth, height;
    public:
        Box(){
            this->length = 0;
            this->breadth = 0;
            this->height = 0;
        }

        Box(int length, int breadth, int height){
            this->length = length;
            this->breadth = breadth;
            this->height = height;
        }

        Box(Box &obj){
            length = obj.length;
            breadth = obj.breadth;
            height = obj.height;
        }

        int getLength(){
            return length;
        }

        int getBreadth(){
            return breadth;
        }

        int getHeight(){
            return height;
        }

        long long CalculateVolume(){
            long long temp = length*breadth;
			long long volume = temp * height;
			return volume;
        }

        bool operator<(Box &B){
			if(length<B.length)
				return true;
			if(breadth<B.breadth&&length==B.length)
				return true;
			if(height<B.height&&length==B.length&&breadth==B.breadth)
				return true;

			return false;
		}

		friend ostream& operator<<(ostream& out, Box& B){
			out<<B.length<<" "<<B.breadth<<" "<<B.height;
			return out;
		}
};

void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}