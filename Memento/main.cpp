/****************************************
* @file    main
* @brief   备忘录模式
* @author  微信号：iwaleon
* @wechat  微信公众号：高效程序员
* @date    2017/10/01
****************************************/

#include "originator.h"
#include "care_taker.h"
#include <time.h>
#include <sstream>

#ifndef SAFE_DELETE
#define SAFE_DELETE(p) { if(p){delete(p); (p)=NULL;} }
#endif

int main()
{
	srand((unsigned)time(0));

	Life *life = new Life();
	PandoraBox *box = new PandoraBox(life);

	// 设置并保存一些历史时间
	for (int i = 0; i < 5; i++) {
		std::ostringstream buffer;
		buffer << "200" << i << "/10/01 00:00:00";
		std::string dt = buffer.str();

		life->SetDateTime(dt);
		box->Save();
	}

	// 穿越多次
	for (int i = 0; i < 2; i++) {
		box->Undo();
		std::cout << "Current date time is " << life->GetDateTime() << std::endl;
	}

	SAFE_DELETE(life);
	SAFE_DELETE(box);

	getchar();

	return 0;
}
