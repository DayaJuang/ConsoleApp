#ifndef PLAYER_H
#define	PLAYER_H

class Deep {
private:
	int* data;
public:
	Deep(int d);
	Deep(const Deep &source);
	Deep(Deep&& source) noexcept;
	~Deep();
};

#endif // DEBUG

