#include <iostream>
using namespace std;

/*
상속 : 클래스는 서로간에 부모의 자식관계를 형성할 수 있다.
자식 클래스는 부모 클래스의 멤버들을 사용할 수 있다.

부모클래스에서 public이나 protected로 되어있는 멤버들은 사용 가능하지만,
private으로 되어있는 멤버는 자식에서도 사용이 불가능하다.

상속의 형태 : public, private 상속이 있다.

다형성 : 상속관계에 있는 클래스 간에 서로 형변환이 가능한 성질을 말한다.

가상함수 : 함수 오버라이딩 이라고도 부른다. 부모 클래스에 선언만 되어있고 자식 클래스에서 정의를 한다.(오버로딩 : 다중 정의)
함수를 재정의하는 기능이다. 멤버함수 앞에 virtual 키워드를 붙이면 해당 함수는 가상함수가 된다.
만약 cp 클래스에 virtual void op() 함수가 있다면 자식클래스에서는 이 가상함수를 재정의할 수 있다.
재정의는 함수 이름과 인자가 완전히 똑같아야 한다.

가상함수를 가지고 있는 클래스는 내부적으로 가상함수 테이블이라는 것을 생성한다.
가상함수테이블은 가상함수들의 메모리 주소를 저장하는 테이블이다.

만약 cp의 op이 가상함수이고 cc 클래스에 op를 재정의한다면 
그런 뒤 cc 객체를 생성하면 가상함수 테이블에는 cc 클래스의 op주소가 올라가게 된다.

만약 cp  객체를 생성한다면 cp의 op 주소가 올라가게 된다.

그래서 op함수, 즉 가상함수를 호출하게 되면 먼저 가상함수 테이블을 참조해서 메모리 주소를 확인한다.
가상함수테이블에 cc의 op 주소가 들어가 있다면 그 주소의 함수를 호출해주는 개념이다.

소멸자도 가상함수로 만들 수 있다. 부모의 소멸자는 가상함수로 만들어두자.
*/

class cp
{
public:
	cp()
	{
		cout << "cp 생성자" << endl;
	}
	~cp()
	{
		cout << "cp 소멸자" << endl;
	}
public:
	int a;
protected:
	int b;
private:
	int c;
public:
	void op()
	{
		cout << "A : " << endl;
		cout << "B : " << endl;
		cout << "C : " << endl;
		cout << "D : " << endl;
	}
};

class cc : public cp
{
public:
	cc()
	{
		b = 200;
		//c = 300; private으로 선언되어 있어서 상속받을 수 없음
		cout << "cc 생성자" << endl;
	}
	~cc()
	{
		cout << "cc 소멸자" << endl;
	}
protected:
	int d;
public:
	void cop()
	{
		cout << "Child Output Function" << endl;
	}
};

class cc1 : private cp
{
public:
	cc1()
	{
		cout << "cc1 생성자" << endl;
	}
	~cc1()
	{
		cout << "cc1 소멸자" << endl;
	}
private:
	int d;
};

class ccc : public cc
{
public:
	ccc()
	{
		cout << "ccc 생성자" << endl;
	}
	~ccc()
	{
		cout << "ccc 소멸자" << endl;
	}
private:
	int e;
};

int main()
{
	//상속관계에서의 생성자 호출 순서 : 부모 -> 자식 순으로 호출된다.
	//상속관계에서의 소멸자 호출 순서 : 자식 -> 부모 순으로 호출된다.
	cp Cp;
	cc Cc;
	cc1 Cc1;
	ccc Ccc;

	Cp.a = 100;
	Cc.a = 200;
	//cc1 클래스는 cp를 private 상속을 하고 있으므로 cp에 public으로 설정되어있는 멤버들도 외부에서는 접근이 불가능하다.
	//c1.a = 300; 
	//c1.op();

	//cc클래스는 cp 클래스를 상속받고 있다.
	//new cc를 하게 되면 cc 객체 하나를 생성해주고 그 메모리 주소를 반환한다
	//그런데 아래에서는 cp * 타입 변수에 이 반환된 주소를 대입해주고 있다.
	//부모포인터타입에 cc 객체의 메모리 주소를 넣을 수 있는 이유는 상속관계에 있기 때문이다.
	//자식 메모리 주소를 부모포인터타입으로 형변환 된 것이기 때문이다.
	//이런 형변환을 업캐스팅이라고 한다.
	//자식 -> 부모 타입 형변환 : 업캐스팅
	//부모 -> 자식 타입 형변환 : 다운캐스팅
	cp* pp = new cc;
	//cp* pp1 = new cc1;
	cp* pp2 = new ccc;

	//cp* ppArr[2] = {};

	//ppArr[0] = new cc;
	//ppArr[1] = new ccc;

	//아래 두 클래스는 모두 cp 클래스를 상속받고 있다.
	//그러므로 pp를 두 타입 모두 다운캐스팅 가능하다.
	//그런데 pp는 ch로 할당한 객체이다.
	//이 객체를 cc1 타입으로 다운캐스팅하여 넣어주게 되면 이 객체를 사용할 때 문제가 발생할 수 있다.
	//왜냐하면 애초에 생성한 객체가 아닌 다른타입으로 변환됐기 때문이다.
	cc* pc = (cc*)pp;
	cc1* pc1 = (cc1*)pp;

	//cc 클래스에 있는 cop 함수에 접근할 수 없다.
	//왜냐하면 pp는 cp 포인터 타입이기 때문에 자식 멤버에 접근이 불가능하기 때문이다.
	//만약 접근하고 싶다면 형변환 해야한다.
	((cc*)pp)->cop();

	//현재 delete를 하게 되면 cc 소멸자->cp 소멸자가 호출되어야 하는데 지금은 cp 소멸자만 호출된다.
	//왜냐하면 근본적으로 pp는 cp 포인터 타입니다.
	//cp 포인터 타입이기 때문에 cc소멸자가 호출될 수 없다.
	delete pp;
	//delete pp2;

	for (int i = 0; i < 2; ++i)
	{
		//delete ppArr[i];
	}

	return 0;
}