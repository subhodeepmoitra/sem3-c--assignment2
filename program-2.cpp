#include<iostream>
int main()
{
    int sales[5][3],i,j,total=0;
    std::cout << "Enter details:-\n";
    for(i=0;i<5;i++)
    {
        std::cout << "Enter sales of 3 items by salesperson " << i+1;
        for (j=0;j<3;j++){
            std::cin >> sales[i][j];
        }
    }
    for(i=0;i<5;i++)
    {
        total=0;
        for(j=0;j<3;j++){
            total=total+sales[i][j];
        }
        std::cout << "Total sales by salesperson " << i+1 << ": " << total << std::endl; 
    }
    for(i=0;i<5;i++)
    {
        total=0;
        for(j=0;j<5;j++){
            total=total+sales[j][i];
        }
        std::cout << "Total sales of items " << i+1 << "is = " << total << std::endl;
    }
    return 0;
}