#pragma once

#define IN_MAX_LEN_TEXT 1024*1024               //макс. размер исходного кода = 1 МБ
#define IN_CODE_ENDL '\n'                       //символ конца строки

//#define IN_CODE_TABLE {\
//	IN::F,	IN::F, IN::F, IN::F, IN::F,	IN::F, IN::F, IN::F, IN::F,	IN::F, IN::T, IN::F, IN::F,	IN::I, IN::F, IN::F,\
//	IN::F,	IN::F, IN::F, IN::F, IN::F,	IN::F, IN::F, IN::F, IN::F,	IN::F, IN::F, IN::F, IN::F,	IN::F, IN::F, IN::F,\
//	IN::T,	IN::T, IN::F, IN::F, IN::F,	IN::F, IN::F, IN::F, IN::F,	IN::F, IN::F, IN::F, IN::F,	IN::F, IN::F, IN::F,\
//    IN::F,	IN::F, IN::F, IN::F, IN::F,	IN::F, IN::F, IN::F, IN::F,	IN::F, IN::F, IN::F, IN::F,	IN::F, IN::F, IN::F,\
//    IN::F,	IN::F, IN::F, IN::F, IN::F,	IN::F, IN::F, IN::T, IN::T,	IN::F, IN::F, IN::F, IN::T,	IN::F, IN::F, IN::F,\
//    IN::F,	IN::F, IN::F, IN::F, IN::F,	IN::F, IN::F, IN::T, IN::I,	'!',   IN::F, IN::F, IN::F,	IN::F, IN::F, IN::F,\
//    IN::F,	IN::F, IN::F, IN::F, IN::T,	IN::T, IN::F, IN::F, IN::F,	IN::F, IN::F, IN::F, IN::T,	IN::F, IN::F, IN::T,\
//    IN::F,	IN::F, IN::T, IN::F, IN::F,	IN::F, IN::F, IN::F, IN::F,	IN::F, IN::F, IN::F, IN::F,	IN::F, IN::F, IN::F,\
//\
//    IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, \
//    IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, \
//    IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, \
//    IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, \
//    IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::T, IN::F, IN::F, IN::T, \
//    IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, \
//    IN::F, IN::F, IN::T, IN::F, IN::F, IN::T, IN::F, IN::F, IN::T, IN::T, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, \
//    IN::T, IN::F, IN::T, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, \
//}

#define IN_CODE_TABLE {\
	IN::F,	IN::F, IN::F, IN::F, IN::F,	IN::F, IN::F, IN::F, IN::F,	IN::F, IN::T, IN::F, IN::F,	IN::I, IN::F, IN::F,\
	IN::F,	IN::F, IN::F, IN::F, IN::F,	IN::F, IN::F, IN::F, IN::F,	IN::F, IN::F, IN::F, IN::F,	IN::F, IN::F, IN::F,\
	IN::T,	IN::F, IN::F, IN::F, IN::F,	IN::F, IN::F, IN::F, IN::F,	IN::F, IN::F, IN::F, IN::F,	IN::F, IN::F, IN::F,\
    IN::T,	IN::T, IN::T, IN::T, IN::F,	IN::F, IN::F, IN::F, IN::F,	IN::F, IN::F, IN::F, IN::F,	IN::F, IN::F, IN::F,\
    IN::F,	IN::T, IN::F, IN::F, IN::F,	IN::F, IN::F, IN::F, IN::F,	IN::F, IN::F, IN::F, IN::T,	IN::F, IN::F, IN::F,\
    IN::F,	IN::F, IN::F, IN::F, IN::F,	IN::F, IN::F, IN::F, IN::I,	'!',   IN::F, IN::F, IN::F,	IN::F, IN::F, IN::F,\
    IN::F,	IN::T, IN::F, IN::F, IN::F,	IN::T, IN::T, IN::F, IN::F,	IN::T, IN::F, IN::F, IN::F,	IN::T, IN::F, IN::F,\
    IN::F,	IN::F, IN::T, IN::F, IN::T,	IN::F, IN::F, IN::F, IN::F,	IN::F, IN::T, IN::F, IN::F,	IN::F, IN::F, IN::F,\
\
    IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, \
    IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, \
    IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, \
    IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, \
    '-'  , IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::T, IN::F, IN::F, IN::F, IN::F, \
    IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, \
    IN::T, IN::F, IN::F, IN::F, IN::F, IN::T, IN::F, IN::T, IN::T, IN::F, IN::F, IN::F, IN::T, IN::F, IN::F, IN::F, \
    IN::T, IN::F, IN::T, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, \
}


namespace In {
	struct IN {
		enum { T = 1024, F = 2048, I = 4096 };
		int size;
		int lines;
		int ignor;
		unsigned char* text;
		int code[256] = IN_CODE_TABLE;
	};
	IN getin(wchar_t infile[]);
};

//lab10 -in:in2.txt
//link /out:lab10.exe Error.obj In.obj Log.obj LP_Lab10.obj Parm.obj