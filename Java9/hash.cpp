#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<string, int> piketNeProvim;

    // hash tabels, maps, dictionary
    piketNeProvim["Gent"] = 100;
    piketNeProvim["Zana"] = 86;

    // piketNeProvim.insert({"Charlie", 35}); -- TODO fix issue

    cout << piketNeProvim["Zani"];

    for (auto it = piketNeProvim.begin(); it != piketNeProvim.end(); ++it)
    {
        cout << it->first << " ka " << it->second << " pike ne provim." << endl;
    }

    return 0;
}