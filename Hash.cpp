#include <iostream>
#include <cstdlib>
#define T_S 10
using namespace std;
enum EntryType {
   Legi, Emp, Del};
   struct HashTableEntry {
      int e;
      enum EntryType info;
   };
   struct HashTable {
      int s;
      HashTableEntry *t;
   };
   bool isPrime (int n) {
   if (n == 2 || n == 3)
      return true;
   if (n == 1 || n % 2 == 0)
      return false;
   for (int i = 3; i * i <= n; i += 2)
      if (n % i == 0)
         return false;
   return true;
}
int nextPrime(int n) {
   if (n <= 0)
      n == 3;
   if (n % 2 == 0)
      n++;
   for (; !isPrime( n ); n += 2);
      return n;
}
int HashFunc(int k, int s) {
   return k % s;
}
HashTable *initiateTable(int s) {
   HashTable *ht;
   if (s < T_S) {
      cout<<"Table Size is Too Small"<<endl;
      return NULL;
   }
   ht= new HashTable;
   if (ht == NULL) {
      cout<<"Out of Space"<<endl;
      return NULL;
   }
   ht->s = nextPrime(s);
   ht->t = new HashTableEntry [ht->s];
   if (ht->t == NULL) {
      cout<<"Table Size is Too Small"<<endl;
      return NULL;
   }
   for (int i = 0; i < ht->s; i++) {
      ht->t[i].info = Emp;
      ht->t[i].e = NULL;
   }
   return ht;
}
int SearchKey(int k, HashTable *ht) {
   int pos = HashFunc(k, ht->s);
   int collisions = 0;
   while (ht->t[pos].info != Emp && ht->t[pos].e != k) {
      pos = pos + 2 * ++collisions -1;
      if (pos >= ht->s)
         pos = pos - ht->s;
   }
   return pos;
}
void Insert(int k, HashTable *ht) {
   int pos = SearchKey(k, ht);
   if (ht->t[pos].info != Legi) {
      ht->t[pos].info = Legi;
      ht->t[pos].e = k;
   }
}
HashTable *Rehash(HashTable *ht) {
   int s = ht->s;
   HashTableEntry *t= ht->t;
   ht= initiateTable(2 * s);
   for (int i = 0; i < s; i++) {
      if (t[i].info == Legi)
         Insert(t[i].e, ht);
   }
   free(t);
   return ht;
}
void display(HashTable *ht) {
   for (int i = 0; i < ht->s; i++) {
      int value = ht->t[i].e;
      if (!value)
         cout<<"Position: "<<i + 1<<" Element: Null"<<endl;
      else
         cout<<"Position: "<<i + 1<<" Element: "<<value<<endl;
   }
}
int main() {
   int v, s, pos, i = 1;
   int c;
   HashTable *ht;
   while(1) {
      cout<<"1.Initialize size of the table"<<endl;
      cout<<"2.Insert element into the table"<<endl;
      cout<<"3.Display Hash Table"<<endl;
      cout<<"4.Rehash The Table"<<endl;
      cout<<"5.Exit"<<endl;
      cout<<"Enter your choice: ";
      cin>>c;
      switch(c) {
         case 1:
            cout<<"Enter size of the Hash Table: ";
            cin>>s;
            ht = initiateTable(s);
            cout<<"Size of Hash Table: "<<nextPrime(s);
         break;
         case 2:
            if (i > ht->s) {
               cout<<"Table is Full, Rehash the table"<<endl;
               continue;
            }
            cout<<"Enter element to be inserted: ";
            cin>>v;
            Insert(v, ht);
            i++;
         break;
         case 3:
            display(ht);
         break;
         case 4:
            ht = Rehash(ht);
         break;
         case 5:
            exit(1);
         default:
            cout<<"\nEnter correct option\n";
      }
   }
   return 0;
}
