#include <iostream>
#include <stdio.h>

class MikanBox{
public:
	void Add(int addmikan);
	void Del(int delmikan);
	void Empty();
	int GetTotal(){
		return total;
}
private:
	int total;
};
void MikanBox::Add(int addmikan)
{
	total += addmikan*50;
}
void MikanBox::Del(int delmikan)
{
	total -= delmikan*50;
		if(total < 0) Empty();
}

void MikanBox::Empty()
{
	total = 0;
}
int main()
{
	MikanBox myMikanbox;
	myMikanbox.Add(15);
	myMikanbox.Del(2);
	printf("箱の中のみかん:%d個\n",myMikanbox.GetTotal());
	myMikanbox.Empty();
	myMikanbox.Add(1);
	printf("箱の中のみかん:%d個\n",myMikanbox.GetTotal());

	return 0;
}

