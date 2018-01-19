#include "proxy.h"

#ifndef SAFE_DELETE
#define SAFE_DELETE(p) { if(p){delete(p); (p)=NULL;} }
#endif

int main()
{
	Proxy* proxy = new Proxy();
	proxy->Recharge(20);
	proxy->Recharge(100);

	SAFE_DELETE(proxy);

	getchar();

	return 0;
}