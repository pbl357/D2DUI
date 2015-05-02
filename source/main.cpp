// ���Է�UI����
#include <iostream>
#include "GuiWindow.h"
#include <memory>
#include "../base/basetypes.h"
int main( char**, int )
{
	using std::cout;
	using std::endl;
	using std::shared_ptr;
	std::cout << "Hello,World!" << std::endl;
	std::shared_ptr<DemoApp> app( new DemoApp );
	cout << "the shared_ptr size is: " << sizeof( app ) << endl;// Ӧ��˵��12�ֽ�
	shared_ptr<int> int_ptr( new int );
	//vector
	//CSize
	//CSize 
//	Gdiplus::RectF
	using DUI_V0_1::CSize;
	CSize size = {1,2};
	size = CSize( 2, 1 );
	size += CSize( 1, 1 );
	size -= CSize( 2, 2 );
	size.SetSize( 3, 3 );
	//size = (-size);
	cout << "cx:" << size.cx << "cy:" << size.cy << endl;
 
 	using DUI_V0_1::CPoint;
 	CPoint pt;
 	typedef DUI_V0_1::DUI_BASE::CSizeT<CPoint::value_type> CSize2;
 	CSize sz2(1,2);
 	pt.Offset( size.To<CSize2>() );// ���ͼ�飬��Ȼ����ȫ������ֱ���ñ��벻ͨ��
 	cout << "pt.x:" << pt.x << "pt.y" << pt.y << endl;
 	DUI_V0_1::CPoint ptf( 2, 3 );
 	cout << ptf.x << "  "<< ptf.y << endl;
	system( "pause" );
	return 0;
}
