/*
@title:GameException.h
@author:Frank Liu
@time:2017-6-7

*/#pragma once

/*��Ϸ�쳣�࣬��������е�һЩ�쳣�����������ǲ����õģ�����һ������쳣��
������׳�һ���쳣��������һ�㣬��ʹ�� try{} catch{}����������쳣��*/
class CGameException
{
private:
	CString info;
public:
	CGameException(wchar_t *excp);
	~CGameException();
};