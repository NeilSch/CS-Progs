#include <iostream>
using namespace std;

void treeTop()
{
  cout << "   ^   " << endl;
  cout << "  / \\ " << endl;
  cout << " /   \\" << endl;
  cout << "/_____\\" << endl;
}
void treeTrunk()
{
  cout << "   ||   " << endl;
}
void drawTree(int height,int number)
{
  for(int cycle=0; cycle < number;cycle++)
    {
      treeTop();
      for(int cycle2=0; cycle2 < height; cycle2++)
	{
	  treeTrunk();
	}
    }
}
int main()
{
  int height, number;
  cout << "Enter tree height: " << endl;
  cin >> height;
  cout << "Enter number of trees: " << endl;
  cin >> number;
  drawTree(height, number);
  return 0;
}
