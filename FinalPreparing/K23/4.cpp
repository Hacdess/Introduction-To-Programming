#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

struct Package
{
    char id[18];
    char name[16];
    char address[51];
    char phoneNumber[11];
    double weight;
};

bool readFile(char filename[], Package packages[], int &n)
{
    n = 0;

    ifstream fin(filename);
    if (!fin)
    {
        cout << "Can't open " << filename << endl;
        return false;
    }

    char ignore[100];
    fin.getline(ignore, 100, '\n');

    while (fin.getline(packages[n].id, 18, '|'))
    {
        fin.getline(packages[n].name, 16, '|');
        fin.getline(packages[n].address, 51, '|');
        fin.getline(packages[n].phoneNumber, 11, '|');
        fin >> packages[n++].weight;
        fin.ignore();
    }

    fin.close();
    return true;
}

bool filterPackagesByDistrict(char filename[], Package packages[], int n, char deliveryDist[])
{    
    ofstream fout(filename, ios::app);
    if (!fout)
    {
        cout << "Can't open " << filename << endl;
        return false;
    }

    fout << "Ma don hang|Ten nguoi nhan|Dia chi|So dien thoai|Khoi luong\n";

    for (int i = 0; i < n; ++i)
    {
        int len = strlen(packages[i].address);
        char district[20];

        int j = 0, count = 0;
        for (j; j < len; ++j)
        {
            if (packages[i].address[j] == ',')
                ++ count;
            else if (count == 3)
            {
                ++j;
                break;
            }
        }

        count = 0;
        for (j; j < len; ++j)
            district[count++] = packages[i].address[j];
        district[count] = '\0';

        cout << district <<  " - " << deliveryDist <<  endl;
        if (strcmp(district, deliveryDist) == 0)
            fout << packages[i].id << '|' << packages[i].name << '|' << packages[i].address << '|' << packages[i].phoneNumber << '|' << packages[i].weight << endl;
    }

    fout.close();
    return true;
}

int main()
{
    Package packs[100];
    int n;
    char filename[50];
    cin.getline(filename, 50, '\n');
    if (readFile(filename, packs, n))
        cout << "Read succ\n";
    cout << n << " " <<  packs[0].weight << endl;
    cin.getline(filename, 50, '\n');
    char dist[50];
    cin.getline(dist, 50, '\n');
    if (filterPackagesByDistrict(filename, packs, n, dist))
        cout << "Wrote succ\n";
}