#include<iostream>
using namespace std;
int main()
{
	int monthlySales[12]={12000,123499,929222,833,9922,92220,98331,8311,87333,12395,767,827344};
	int highestSales=monthlySales[0];
	int lowestSales=monthlySales[0];
	int totalSales=0;
	int highestBranch=0;
	int lowestBranch=0;
	
	for (int i = 0; i < 12; i++) 
	{
        // Add to total sales
        totalSales += monthlySales[i];

        // Check for highest sales
        if (monthlySales[i] > highestSales) 
		{
            highestSales = monthlySales[i];
            highestBranch = i;
        }

        // Check for lowest sales
        if (monthlySales[i] < lowestSales) 
		{
            lowestSales = monthlySales[i];
            lowestBranch = i;
        }
    }
	cout<<"Total Annual sales: $"<<totalSales<<endl;
	cout<<"Branch with highest sales: Branch "<<highestBranch<<endl;
	cout<<"Branch with lowest sales:  Branch "<<lowestBranch<<endl;
}
