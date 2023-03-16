#include <iostream>
using namespace std;
int main()
{
		float fiyat,kdv_fiyat;
			cout<<"  fiyat giriniz : " <<endl;
				cin>>fiyat;
			//	kdv_fiyat=fiyat+(fiyat*0.18);
		kdv_fiyat=fiyat+(fiyat*18/100);
		cout<<"kdvli fiyat"<<kdv_fiyat;	

	
	
	
}
