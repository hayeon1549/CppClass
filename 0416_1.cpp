#include <iostream>
#include <string>
	using namespace std;

	/*
	Figure 클래스는 하위 클래스에서 모형을 그리는데
	사용될 수 있는 draw 함수를 가지고 있다.
	그러나 Figure 클래스는 실제 도형을 그리는 함수 구현 부분을
	정의 할 수 없다. 그 이유는 Figure의 하위 클래스인
	Triangle, Square, Circle 클래스마다 그리는 방법이 다르기
	때문이다. 객체지향에서는 이러한 경우 Figure Class를
	추상 클래스 (Abstract class)로 정의하고 draw 함수 역시
	추상 함수(메서드)로 정의한다.

	추상 메서드(함수)란 함수의 선언 부분만 있고 구현 부분이
	없는 함수를 말한다. 이렇게 선언된 추상 클래스는 하위 클래스에서
	구현되어 사용된다. 즉, 각각의 하위 클래스에서 상속받은
	추상 메소드를 서로 다른 방법으로 구현하게 되는 것이다.
	*/
	class Figure
	{
	public:
		virtual string draw() = 0;
		// 구현 대신 가상함수에 NULL(0)을 대입하면 해당 함수는 순수 가상함수가 된다.
		// 이와 동시에 순수 가상함수를 포함하는 클래스는 추상 클래스로 지정된다.
	};


	class Triangle : public Figure
	{
	public:
		virtual string draw() { return "Triangle"; };
	};
	class Square : public Figure
	{
	public:
		virtual string draw() { return "Square"; };
	};
	class Circle : public Figure
	{
	public:
		virtual string draw() { return "Circle"; };
	};

	int main()
	{
		Figure* F1 = new Triangle;
		Figure* F2 = new Square;
		Figure* F3 = new Circle;

		cout << F1->draw() << endl;
		cout << F2->draw() << endl;
		cout << F3->draw() << endl;

		return 0;
	}