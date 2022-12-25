/*
।। जय श्री राम ।।
।। जय हनुमान ।।
*/

/*
   ██╗░░░██╗███████╗██╗░░░██╗███╗░░░███╗░█████╗░██╗░░██╗██╗
   ██║░░░██║╚════██║██║░░░██║████╗░████║██╔══██╗██║░██╔╝██║
   ██║░░░██║░░███╔═╝██║░░░██║██╔████╔██║███████║█████═╝░██║
   ██║░░░██║██╔══╝░░██║░░░██║██║╚██╔╝██║██╔══██║██╔═██╗░██║
   ╚██████╔╝███████╗╚██████╔╝██║░╚═╝░██║██║░░██║██║░╚██╗██║
   ░╚═════╝░╚══════╝░╚═════╝░╚═╝░░░░░╚═╝╚═╝░░╚═╝╚═╝░░╚═╝╚═╝
*/

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define mod 1000000007
#include<bits/stdc++.h>
using namespace std;
template <typename DataType>
ostream& operator<<(ostream& os, const vector<DataType>& v)
{
 int n = v.size();
    for (int i = 0 ; i<n ; i++) {
        os << v[i];
        if (i != n-1)
            os << " ";
    }
    return os;
}
template <typename DataType>
ostream& operator<<(ostream& os, const set<DataType>& v)
{
    for (auto &it : v) {
        os << it;
        if (it != *v.rbegin())
            os << " ";
    }
    return os;
}
template <typename DataType>
ostream& operator<<(ostream& os, const unordered_set<DataType>& v)
{
    for (auto &it : v) {
        os << it;
        if (it != *v.rbegin())
            os << " ";
    }
    return os;
}
template <typename T, typename S>
ostream& operator<<(ostream& os, const map<T, S>& v)
{
    for (auto &it : v) 
        os << it.first << " " << it.second << "\n";
    return os;
}
template <typename T, typename S>
ostream& operator<<(ostream& os, const unordered_map<T, S>& v)
{
    for (auto &it : v) 
        os << it.first << " " << it.second << "\n";
    return os;
}
template <typename T, typename S>
void print_keys(const map<T, S>& v)
{
    for (auto &it : v) 
        cout << it.first << " ";
    cout << "\n";
}
template <typename T, typename S>
void print_values(const map<T, S>& v)
{
    for (auto &it : v) 
        cout << it.second << " ";
    cout << "\n";
}
template <typename T>
T getsum(T a, T b)
{
    T sum=0;
    for(int i=a;i<=b;i++)
    {
        sum+=i;
    }
    return sum;
}
template <typename T>
T lcm(T a, T b)
{
return (a*b)/__gcd(a,b);
}
template <typename T>
bool isprime(T n)
{
for(int i=2;i*i<=n;i++)
{
if(n%i ==0)return false;
}
return true;
}



/*
  ███╗░░██╗░█████╗░██████╗░██╗░░░██╗████████╗░█████╗░
  ████╗░██║██╔══██╗██╔══██╗██║░░░██║╚══██╔══╝██╔══██╗
  ██╔██╗██║███████║██████╔╝██║░░░██║░░░██║░░░██║░░██║
  ██║╚████║██╔══██║██╔══██╗██║░░░██║░░░██║░░░██║░░██║
  ██║░╚███║██║░░██║██║░░██║╚██████╔╝░░░██║░░░╚█████╔╝
  ╚═╝░░╚══╝╚═╝░░╚═╝╚═╝░░╚═╝░╚═════╝░░░░╚═╝░░░░╚════╝░



⠀⠀⠀⠀⠀⠀⠀⠀⣀⣀⠀⠀⠀⠀⠀⣠⣴⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢟⣁⣤⣶⣾⣿⣿⣿⣿⣿⠟⠁⠀⠀⠀⠀⠀⣀⣤⣶⣶⣾⣿⣿⣿⣿⣷⣦⣀⠀⠹⡄
⠀⠀⠀⠀⠀⠀⢀⡤⠚⠁⠀⠀⢀⣴⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠟⠁⠀⠀⠀⣠⣤⣾⣿⣿⣿⣿⡿⠋⠀⠈⠛⢿⣿⣿⣿⣷⣄⢡
⠀⠀⠀⠀⢀⠴⠋⠀⠀⠀⠀⣴⣿⣿⣿⣿⣿⡿⠟⠛⠛⠻⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠃⠀⣀⣤⣾⣿⣿⣿⣿⣿⣿⣿⠋⠀⠀⠀⠀⠀⠀⠈⠻⣿⣿⣿⡎
⠀⠀⠀⠀⠀⠀⠀⠀⣀⢠⣾⣿⣿⣿⣿⡟⣫⠗⢿⣽⣦⡀⠀⡿⠀⠀⠀⠀⠈⠉⣹⠟⠉⠙⠛⠛⠻⢿⣯⣥⣶⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⣿⣿⣿
⠀⠤⠀⠀⠀⠀⠀⢠⣿⣿⣿⣿⠿⡿⢃⡴⠃⠀⠿⠿⠿⡇⣼⠁⠀⠀⠀⠀⣠⠞⠁⠀⠀⠀⠀⠀⠀⠈⠁⠈⣙⣛⢿⣿⣿⣿⣿⣿⣿⡿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢿⣿
⠀⠀⠀⠀⠀⠀⢠⣯⡿⠟⠉⠀⣰⣣⡾⠁⠀⠀⢀⣀⣰⣇⠏⠀⠀⠀⣠⠞⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣧⡠⠈⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⢿
⠀⠀⠀⠀⠀⣠⠟⠋⠀⠀⠀⢀⣟⡟⠀⣠⠤⠚⠋⢠⡽⡿⠀⠀⢀⡜⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⡿⠛⠛⠛⢿⣿⡻⣿⣿⣷⣟⢶⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘
⠀⠀⢀⡴⠞⠁⠀⠀⠀⠀⠀⢸⣼⢠⡞⠁⠀⠀⡼⠁⢸⠃⢀⣰⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢿⣿⣿⠃⠀⢀⡴⠒⢾⢷⡬⡟⢿⣿⣿⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⢀⣴⣥⡶⠂⠀⠀⠀⠀⠀⠀⢸⠉⠘⡇⠀⠀⠀⡇⢠⡏⡴⠟⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⠀⠀⢸⠡⢶⣶⢸⡇⢱⠈⠙⢿⣿⣿⣄⡀⠀⠀⠀⠀⠀⠀⢀
⣿⣿⡿⠁⠀⢀⡀⠀⠀⠀⠀⢰⠀⠤⠼⠒⠛⠛⠃⣼⠞⠁⠀⠉⠉⠙⠛⠛⠒⠲⠤⣤⣀⡀⠀⠀⠀⠀⠀⠀⠙⣿⣄⠀⠘⢦⣬⠞⢸⡇⠸⡆⡂⠀⠙⣿⣿⣯⣄⠀⠀⠀⠰⠇⠀
⣿⡿⢀⣠⡖⠉⠀⠀⠀⠀⠀⢸⠀⠀⠀⠀⠀⠀⠐⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠙⠲⠤⣀⠀⠀⠀⠈⠿⢷⣦⣀⠀⠀⣾⠁⢀⣧⡇⠀⠀⠈⢻⣿⣿⣂⠀⠀⠀⠀⠀
⣿⠔⢉⡞⠀⠀⠀⠀⡖⠀⠀⠘⣄⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠀⠀⠀⠀⠀⠀⠉⠙⢻⣾⡁⠀⣸⢿⣿⡀⢀⠂⠀⠻⣿⣯⢇⠀⠀⠀⠀
⠁⢀⡟⠀⠀⠀⠀⣸⠁⠀⢠⡞⣏⠉⠉⢻⡇⠀⠀⠀⠤⠤⠒⠒⠒⠒⠒⠒⠒⠒⠂⠤⠤⠤⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠠⠤⢄⣉⡛⠻⣖⣏⠉⠁⠁⠀⠀⢻⣿⡿⡄⠀⠀⠀
⢠⡟⠀⢀⡀⠀⠀⡟⠀⣰⠋⣷⠈⣄⢦⡿⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠹⣆⠈⣮⠇⢀⣠⠮⢄⣈⣿⡇⡄⠀⠀⠀
⠏⢀⣤⡿⠀⠀⣸⠁⣴⠃⠀⠘⣷⡀⣼⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣠⣤⠤⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢈⡷⣿⡟⡿⣷⣶⠟⢻⡇⠐⠀⠀
⣰⣿⡿⠀⠀⠀⣟⡼⠁⠀⠀⠀⡟⠳⡞⠀⠀⠀⠀⠀⢀⣠⠴⠖⠊⠉⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⢿⢱⡏⣿⣦⠿⠁⠀⢰⡷⠀⠀⠀
⣿⣿⠁⠀⠀⢠⡟⠀⠀⠀⠀⢰⡿⣿⠇⠀⠀⠀⠴⠊⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⣤⢤⣄⠀⠀⠀⠀⠀⠀⠀⣀⠀⠀⠀⠀⠀⣼⠈⢧⣹⡽⠋⠀⠀⠀⠈⠁⠀⠀⠀
⣿⡏⠀⣠⢤⠞⠀⠀⠀⠀⠀⢸⠀⢹⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⣴⣟⡉⠀⠀⠀⠀⠙⠢⣄⠀⠀⠀⠀⠈⠙⠦⠀⠀⠀⡇⠀⢀⠟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⡿⢀⣾⣣⠏⠀⠀⠀⠀⠀⠀⢸⠀⠘⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣶⣿⣿⣿⣿⣿⣷⣶⣄⡀⠀⠀⠈⠳⣄⠀⠀⠀⠠⠤⣀⡠⠼⣃⢀⠟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⣿⣿⣿⠋⠀⠀⠀⠀⠀⠀⠀⢸⠀⠀⠹⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣾⠉⠛⢻⣿⣿⣿⣿⣿⣿⣿⣿⠗⢦⡀⠀⠈⠳⡄⠀⠀⠀⠀⠀⠀⣸⠏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⣯⣽⠃⠀⠀⠀⠀⠀⠀⠀⠀⢸⡇⠀⠀⠸⡄⠀⠀⠀⠀⠀⠀⠀⠀⣟⠈⠻⣄⡀⠈⠻⣿⣿⣿⣿⣿⣧⣀⡀⠙⢦⡀⠀⣸⣦⠤⠀⢀⣠⡰⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⣿⡿⣷⣶⣶⣄⡀⠀⠀⠀⠀⠈⡿⣆⠀⠀⠹⡄⠀⠀⠀⠀⠀⠀⠀⠸⣄⠀⠀⠙⢦⡀⠉⢿⣿⣿⣿⣿⣿⣷⣶⣶⡽⠞⠉⠀⠀⠀⣸⡽⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⣿⣿⣿⣿⣿⣿⣿⣦⣤⣤⡀⠀⣿⠈⠳⣄⠀⠹⡄⠀⠀⠀⠀⠀⠀⠀⠈⠳⣄⠀⠀⠙⢦⡀⢻⣿⣿⣿⣿⣿⡟⠋⠀⠀⠀⠀⢀⡼⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣜⣀⡀⠈⠳⣀⠙⣆⠀⠀⠀⠀⠀⠀⠀⠀⠈⠳⢄⡀⠀⠉⠻⢿⣿⣿⡟⠋⠀⠀⠀⠀⣠⠞⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣶⣤⠙⠛⣞⣦⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠲⣄⠀⠈⣩⠏⠀⠀⠀⣀⠴⠊⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣤⣬⣝⣧⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⠻⠁⠀⢀⠤⠚⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⠴⠚⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠃⢰⣿⣷⣤⡀⠀⠀⠀⠀⣀⡴⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠟⠣⣿⣿⣿⣿⣿⣿⠟⠛⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣟⠈⠀⣿⣿⣿⣧⣿⠏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡏⠀⢸⣿⣿⣏⣿⠏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠟⠀⢀⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠀⣢⣼⣿⡿⣽⣿⡟⢤⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⢰⣿⣿⣿⠃⣿⣿⡇⡀⠙⢦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠁⢹⣿⣿⣿⣿⣼⣿⣿⣧⠉⢆⠀⠙⢦⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠯⣄⣾⣿⣯⣽⣿⣿⣿⣿⣿⣷⡈⢢⡀⠀⠑⢄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡏⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⡀⠳⡄⠀⠀⠙⠦⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀







*/
class Solution{
    #define int long long int
    
    public:
    void solve(){
     fastio;
     #define endl '\n'

     int n,m;
     cin>>n>>m;
     int a[m];
     for(int i=0;i<m;i++)cin>>a[i];
     sort(a,a+m);
     vector<int>diff;
     for(int i=0;i<m;i++)
     {
        if(i==0)diff.push_back(n+a[0]-a[m-1]-1);
        else diff.push_back(a[i]-a[i-1]-1);
     }

     sort(diff.begin(),diff.end(),greater<int>());

     int infected=0;
     int day=0;

     for(auto x:diff)
     {
        if(x<= 2*day)break;
        infected+=max(1LL,x-(2*day)-1);
        day+=2;
     }

        cout<<n-infected<<endl;
    }





    void solve_testcase(){
    fastio;

    int t;
    cin >> t;
        while(t--){
            solve();
        }
    }
};





int32_t main(){
    Solution solution;
    // solution.solve();
     solution.solve_testcase();
    return 0;
}