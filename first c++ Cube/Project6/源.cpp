#include <iostream>
using namespace std;
class cube
{
	//行为
public:
	void setl(int num)
	{
		m_l = num;
	}
	int getl()
	{
		return m_l;
	 }
	void setw(int num)
	{
		m_w = num;
	}
	int getw()
	{
		return m_w;
	}
	void seth(int num)
	{
		m_h = num;
	}
	int geth()
	{
		return m_h;
	}
	int getS()
	{
		return 2 * (m_h * m_l + m_h * m_w + m_l * m_w);
	}
	int getV()
	{
		return m_h * m_l * m_w;
	}
	bool isSamewith(cube& a)
	{
		if (m_h == a.geth() && m_w == a.getw() && m_l == a.getl())
			return true;
		return false;
	}
	//属性
private:
	int m_l;
	int m_w;
	int m_h;
};

bool isSame(cube &c1,cube&c2)
{
	if (c1.geth() == c2.geth() && c1.getw() == c2.getw() && c1.getl() == c2.getl())
	return true;
	return false;
}

int main()
{
	cube c1;
	c1.setl(10);
	c1.setw(20);
	c1.seth(30);

	cout << "c1面积:" << c1.getS() << endl;
	cout << "c1体积:" << c1.getV() << endl;

	cube c2;
	c2.setl(10);
	c2.setw(20);
	c2.seth(30);

	if(isSame(c1, c2))
		cout << "全局函数判断出c1,c2相等" << endl;
	else
		cout << "全局函数判断出c1,c2不相等" << endl;

	if (c1.isSamewith(c2))
		cout << "c1方法判断出c1,c2相等" << endl;
	else
		cout << "c1方法判断出c1,c2不相等" << endl;
	return 0;
}
