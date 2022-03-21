#include<iostream>
using namespace std;
class base
{
public:virtual void foo() { cout << "foo base" << endl; }
};
class derived :public base
{
public:virtual void foo() { cout << "foo derived" << endl; }
};
void show1(base b)
{
	b.foo();
}
void show2(base* b)
{
	b->foo();
}
void show3(base& b)
{
	b.foo();
}
class demo
{}dd;
class warrior
{
public: virtual void attack() = 0;
};class swordsman :public warrior
{
public: virtual void attack() { cout << "swords uses sword to attack" << endl; };
};class crossbowman :public warrior
{
public: virtual void attack() { cout << "crossbowman uses bow to attack" << endl; };
};class dargon :public warrior
{
public: virtual void attack() { cout << "dragon uses fire to attack" << endl; };
		void fly()
		{
			cout << "dragon flies high in sky" << endl;
		}
};
warrior* create_warriors()
{
	switch (rand() % 3)
	{
	case 0:return new swordsman;
	case 1:return new crossbowman;
	case 2: return new dargon;
	}
}int main()
{
	int count_swordsman, count_crossbowman, count_dargon;
	warrior* myheros;
	srand(time(NULL));
	for (int i = 0; i < 10; i++)
	{
		myheros = create_warriors();
		if (typeid(*myheros) == typeid(swordsman))
			count_swordsman++;
	}
	if (typeid(*myheros) == typeid(crossbowman))
		count_crossbowman++;
}
if (typeid(*myheros) == typeid(dargon))
count_dargon++;
}
/*warrior* myhero;
myhero = new swordsman;
cout<< typeid(*myhero).name() << endl;
myhero = new dragon;
if (typeid(*myhero) == typeid(dragon))
{
static_cast<dragon*>(myhero)->fly();
}
*/
/*derived d1;
show1(d1);
show2(&d1);
show3(d1);
int value = 10;
int* ptr = &value;
cout << typeid(value).name() << endl;
cout << typeid(dd).name() << endl;
cout << typeid(*ptr).name() << endl;*/
return 0;
}

[11:55] Asai, Vijay
#include<iostream>
using namespace std;
class vehicle
{
	string name;
public: vehicle() :name("") {}
		vehicle(string name) :name(name) {}
		virtual void start() = 0;
		virtual void stop() = 0;
		virtual ~vehicle() {}
};
class twowheeler :public vehicle
{
	virtual void start()
	{
		cout << "2wheeler starts" << endl;
	}
	virtual void stop()
	{
		cout << "2wheeler stops" << endl;
	}
};
class fourwheeler :public vehicle
{
public:fourwheeler(string name) :vehicle(name) {}
	   virtual void start()
	   {
		   cout << "fourwheeler starts" << endl;
	   }
	   virtual void stop()
	   {
		   cout << "fourwheeler stops" << endl;
	   }
};
class chargeable { //
public:virtual void charging() = 0;
};
class truck :public vehicle, public chargeable
{
public:truck(string name) :vehicle(name) {}
	   virtual void start()
	   {
		   cout << "truck starts" << endl;
	   }
	   virtual void stop()
	   {
		   cout << "truck stops" << endl;
	   }
	   virtual void charging()
	   {
		   cout << "truck is charging" << endl;
	   }
};
int main()
{
	fourwheeler myvehicle("bmw"); myvehicle.start();
	myvehicle.stop();
	vehicle* v1 = new truck("mahindra");
	//vehicle* v2 = new twowheeler("pulsar");
	truck* mytruck = dynamic_cast<vehicle*>v1; //dynamic cast is succeed 
	mytruck->start();
	mytruck->charging();
	mytruck->stop();


	/*if (typeid(*v1) == typeid(truck))
	{
	v1->start();
	v1->stop();
	static_cast<truck*>(v1)->charging();
	}*/
	delete v1;
	return 0;
}

