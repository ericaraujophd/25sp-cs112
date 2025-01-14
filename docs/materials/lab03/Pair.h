#include <string>
using namespace std;

typedef int Item;

class Pair {
public:
	// default constructor
	Pair();

	// explicit-value constructor
	Pair(Item first, Item second);

	// getters
	Item getFirst() const;
	Item getSecond() const;

	// setters
	void setFirst(Item newVal);
	void setSecond(Item newVal);

	string toString() const;

private:
	Item myFirst;
	Item mySecond;
};

ostream& operator<<(ostream &out, const Pair &p);
