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
  static int tree=0;
  for(int cycle=0; cycle < number;cycle++)
    {
      tree++;
      treeTop();
      for(int cycle2=0; cycle2 < height; cycle2++)
        {
          treeTrunk();
        }
    }
  cout << "There are currently " << tree << " trees in the forest." << endl;
}
int main()
{
  int height, number;
  char quest;
  quest='y';
do
  {
    cout << "Enter tree height: " << endl;
    cin >> height;
    cout << "Enter number of trees: " << endl;
    cin >> number;
    drawTree(height, number);
    cout << "Do you want more tree (Y/N) ?:";
    cin >> quest;
    }
  while(quest=='y'||quest=='Y');
  return 0;
}

