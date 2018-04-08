#include "SimSearcher.h"

using namespace std;

int main(int argc, char **argv)
{
	SimSearcher searcher;

	vector<pair<unsigned, unsigned> > resultED;
	vector<pair<unsigned, double> > resultJaccard;

	unsigned q = 3, edThreshold = 1;
	double jaccardThreshold = 0.4;

	searcher.createIndex(argv[1], q);
	searcher.searchJaccard("query", jaccardThreshold, resultJaccard);
	searcher.searchED("query line", edThreshold, resultED);

	for (int i = 0; i < resultED.size(); i++)
	{
		printf("%d %d\n", resultED[i].first, resultED[i].second);
	}

	return 0;
}

