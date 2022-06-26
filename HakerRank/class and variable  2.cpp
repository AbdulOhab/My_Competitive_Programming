
// class 8 
#include<iostream>
#include<cstdio>
using namespace std;

class rectuangular{
public:
	int hight;
	int wight;
	int area(void);
	// {
	// 	return hight*wight;
	// }
private:
	int a;
protected:
	int b;

	public:
	void set(int a,int b);
};

inline int rectuangular::area(){
	return hight*wight;
}// class intro.


// public private protected 
void rectuangular::set(int a,int b){
	hight=a;
	wight=b;
}

int add(int a,int b)
{
int sum;
sum=a+b;
return sum;
}




class su{
	public:
	int north;
	int south;
	su();
	~su();


};

su::su()
{
	north=10;
	south =20;
	cout<<"constructor";
}
su::~su()
{
	north =20;
	south=20;
	cout<<"destructor";

}

int main()
{

su c;
int sum =c.north+c.south;
cout<<sum <<endl;




	rectuangular obj;
	obj. set(5,7);

	obj.hight =5 ;
    obj.wight =6 ;
    cout<<obj.area()<<endl;
     int a,b;
     a=5,b=6;
     cout<<add(a,b)<<endl;


//block;

{
	int a=10;
	if(a>5)
	{
		cout << "true";
		//cout <<;
	}
	return 0;
}


}

int main()
{
	int *ptr;
	// int a;
	// ptr = &a;
	// a=25;
	ptr =new int(5);
	cout<<*ptr<<endl;
	*ptr = 7;
	cout<<*ptr;
	delete(ptr);
}

