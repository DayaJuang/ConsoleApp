#include "Deep.h"

Deep::Deep(int d) {
	data = new int;
	*data = d;
}

Deep::Deep(const Deep &source)
	: Deep{ *source.data } {
}

Deep::Deep(Deep&& source) noexcept
	: data{ source.data } {
	source.data = nullptr;
}

Deep::~Deep() {
	delete data;
}
