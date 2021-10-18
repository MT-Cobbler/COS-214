/*
COS 121 - Template Method
August 4, 2011
Christoph Stallmann
*/

#include "memosender.h"

using namespace std;

int main()
{
	MemoSender sender("August 10, 2011", "Please remember the meeting tomorrow at 10h30!", "Greetings, your Boss");

	string emails[6] = {"p.dool@cos121.ac.za", "p.dool@cos121.ac.za", "k.hope@cos121.ac.za", "r.reed@cos121.ac.za", "l.nkosi@cos121.ac.za", "t.dejager@cos121.ac.za"};

	sender.sendBatch(emails, 6);

	return 1;
}
