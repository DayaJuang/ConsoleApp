#include "Deep.h"

Deep::Deep(int d) {
	data = new int;
	*data = d;
}

Deep::Deep(const Deep &source)
	:Deep{ *source.data } {
}

Deep::~Deep() {
	delete data;
}
