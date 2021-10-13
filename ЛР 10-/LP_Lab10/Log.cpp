#include <iostream>
#include <ctime>
#include "Parm.h"
#include "Log.h"
#include "In.h"	

using namespace std;

namespace Log {

	LOG getlog(wchar_t logfile[]) {						// ������������ ��������� LOG
		LOG log;

		log.stream = new ofstream;
		log.stream->open(logfile);

		if (log.stream->fail())
			throw ERROR_THROW(112);						// ���� ����� �� ��������
		wcscpy_s(log.logfile, logfile);
		return log;
	}

	void WriteLine(LOG log, const char* c, ...) {		// ������� � �������� ������������ �����
		const char** ptr = &c;

		while (*ptr != "") {
			*log.stream << *ptr;
			ptr++;
		}
	}

	void WriteLine(LOG log, const wchar_t* wc, ...) {	// ������� � �������� ������������ �����
		const wchar_t** ptr = &wc;

		char temp[100];

		while (*ptr != L"") {
			wcstombs(temp, *ptr++, sizeof(temp));		//��� �������������� ������ wchar_t* � ������ char*
			*log.stream << temp;
		}
	}

	void WriteLog(LOG log) {							// ������� � �������� ���������
		time_t rawtime;
		struct tm timeinfo;								//��������� �������� ������� �����
		char buffer[100];

		time(&rawtime);									//������� ���� � ��������
		localtime_s(&timeinfo, &rawtime);				//������� ��������� �����, �������������� � ���������

		*log.stream << "----- �������� ----- " << endl;
		strftime(buffer, 100, "���������: %d.%m.%Y %A %H:%M:%S", &timeinfo);
		*log.stream << buffer << endl;
	}

	void WriteParm(LOG log, Parm::PARM parm) {			// ������� � �������� ���������� � ������� ����������
		char inInfo[PARM_MAX_SIZE];
		char outInfo[PARM_MAX_SIZE];
		char logInfo[PARM_MAX_SIZE];

		wcstombs(inInfo, parm.in, sizeof(inInfo));
		wcstombs(outInfo, parm.out, sizeof(outInfo));
		wcstombs(logInfo, parm.log, sizeof(logInfo));

		*log.stream << "\n----- ��������� ----- " << endl;
		*log.stream << "-in:\t" << inInfo << endl;
		*log.stream << "-log:\t" << logInfo << endl;
		*log.stream << "-out:\t" << outInfo << endl;
	}

	void WriteIn(LOG log, In::IN in) {
		*log.stream << "\n----- �������� ������ ----- \n" << in.text;
		*log.stream << "\n\n���������� ��������: " << in.size;
		*log.stream << "\n���������������: " << in.ignor;
		*log.stream << "\n���������� �����: " << in.lines;
	}

	void WriteError(LOG log, Error::ERROR error)
	{
		if (log.stream)
		{
			*log.stream << "\n������ " << error.id
				<< ": " << error.message
				<< "\n������ " << error.inext.line
				<< " ������� " << error.inext.col << endl;
			Close(log);
		}
		else
		{
			cout << "\n������ " << error.id
				<< ": " << error.message
				<< "\n������ " << error.inext.line
				<< " ������� " << error.inext.col << endl;
		}
	}
	void Close(LOG log)
	{
		log.stream->close();
		delete log.stream;
	}
}