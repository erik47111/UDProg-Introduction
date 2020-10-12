#include "std_lib_facilities.h"
int main()
try {
1//cout << "Success!\n";
1. Cout << "Success!\n"; //kis c
2//cout << "Success!\n";
2. cout << "Success!\n; //be zárni macska körömmel
3//cout << "Success" << "!\n";
3. cout << "Success" << !\n" //az n előtt nincs macskaköröm
4//cout << "success" << '\n';
4. cout << success << '\n'; //cout utám "" kell
5//string res = 7; vector<char> v(10); v[5] = res; cout << "Success!\n";
5. string res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n"; //rossz a tipusa a tömbnek,res rossz tíőusa
6//vector<int> v(10); v[5] = 7; if (v[5]==7) cout << "Success!\n";
6. vector<int> v(10); v(5) = 7; if (v(5)!=7) cout << "Success!\n"; // elemre hivatkozunk []
7//if (true) cout << "Success!\n"; else cout << "Fail!\n";
7. if (cond) cout << "Success!\n"; else cout << "Fail!\n"; //cond helyett kell egy állitás
8//bool c = false; if (c==0) cout << "Success!\n"; else cout << "Fail!\n";
8. bool c = false; if (c) cout << "Success!\n"; else cout << "Fail!\n"; //a false értéke 0 ezért jó
9//string s = "ape"; string c = "fool"; if (c!="s") cout << "Success!\n";
9. string s = "ape"; boo c = "fool"<s; if (c) cout << "Success!\n"; //rossz a c típusa
10//string s = "ape"; if (s!="fool") cout << "Success!\n";
10.string s = "ape"; if (s=="fool") cout << "Success!\n"; //nem egyenlő kell
11//string s = "ape"; if (s!="fool") cout << "Success!\n";
11. string s = "ape"; if (s=="fool") cout < "Success!\n"; //nem egyenkő kell mivel az ape nem lesz egyenlő a fool al
12//string s = "ape"; if (s!="fool") cout << "Success!\n";
12. string s = "ape"; if (s+"fool") cout < "Success!\n"; //s+ nem létezik ilyen értelemben
13//vector<char> v(5); for (int i=0; i<v.size(); ++i) ; cout << "Success!\n";
13. vector<char> v(5); for (int i=0; 0<v.size(); ++i) ; cout << "Success!\n";// i től megyünk
14//vector<char> v(5); for (int i=0; i<v.size(); ++i) ; cout << "Success!\n";
14. vector<char> v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n";//kisebb egyenlő nem lehet
15//string s = "Success!\n"; for (int i=0; i<1; ++i) cout << s;
15. string s = "Success!\n"; for (int i=0; i<6; ++i) cout << s[i]; //s t írjuk ki nem az i.edik elemét
16//if (true) cout << "Success!\n"; else cout << "Fail!\n";
16. if (true) then cout << "Success!\n"; else cout << "Fail!\n"; //then cout nincsen
17//int x = 2000; int c = x; if (c==2000) cout << "Success!\n";
17. int x = 2000; char c = x; if (c==2000) cout << "Success!\n"; //rossz a c típusa mivel intel lesz egylő
18//string s = "Success!\n"; for (int i=0; i<1; ++i) cout << s;
18. string s = "Success!\n"; for (int i=0; i<10; ++i) cout << s[i]; //s t írarjuk ki és 1 ig megyünk
19//vector<int> v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n";
19. vector v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n"; //nincs vektor típusa
20//int i=0; int j = 9; while (i<10) ++i; if (j<i) cout << "Success!\n";
20. int i=0; int j = 9; while (i<10) ++j; if (j<i) cout << "Success!\n";// az i t növeljük
21//int x = 3; double d = 5/(x-2); if (d!=2*x+0.5) cout << "Success!\n";
21. int x = 2; double d = 5/(x–2); if (d==2*x+0.5) cout << "Success!\n";//– e helyett - és nemegyenlővé tettem az egyenletet
22//string s = "Success!\n"; for (int i=0; i<=10; ++i) cout << s[i];
22. string<char> s = "Success!\n"; for (int i=0; i<=10; ++i) cout << s[i]; //sima string nem vektor
23. int i=0;int j=9; while (i<10) ++i; if (j<i) cout << "Success!\n";
23. int i=0; while (i<10) ++j; if (j<i) cout << "Success!\n"; // j változót létre kell hozni és i növekszik
24//int x = 4; double d = 5/(x-2); if (d/=2*x+0.5) cout << "Success!\n";
24. int x = 4; double d = 5/(x–2); if (d=2*x+0.5) cout << "Success!\n"; //nem egyenlő a két állitás
25//cout << "Success!\n";
25. cin << "Success!\n"; //nem bekérünk hanem kiírunk


return 0;
}
catch (exception& e) {
cerr << "error: " << e.what() << '\n';
return 1;
}
catch (...) {
cerr << "Oops: unknown exception!\n";
return 2;
}
