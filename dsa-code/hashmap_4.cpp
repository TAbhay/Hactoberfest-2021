#include <iostream>
#include <string>

using namespace std;

template <typename V>
class mapNode  //apne map jo ki array type ka hoga usme harek point pr node hi rahega
{              //usi ke liye ye class hai
    string key;
    V value;
    mapNode* next;

    mapNode(string key,V value){
        this->key=key;
        this->value = value;
        this->next = NULL;
    }

    ~mapNode(){
        delete next;
    }

};

template<typename V>
class ourMap
{
    mapNode<V>** buckets;
    int count;
    int numBuckets;

public:
    ourMap(){
        count = 0;
        numBuckets=5;
        buckets = new mapNode<V>*[numBuckets];
        for(int i=0;i<numBuckets;i++){
            buckets[i]=NULL;
        }
    }

    ~ourMap(){
        for(int i=0;i<numBuckets;i++){
            delete buckets[i];
        }
        delete []buckets;
    }

    int size(){
        return count;
    }

    //to return a value
    V getValue(string key){
        int bucketIndex = getBucketIndex(key);
        mapNode<V>* head = buckets[bucketIndex];
        while(head!=NULL){
            if(head->key==key){
                return head->value;
            }
            head=head->next;
        }
        return 0;
    }
private:
    //ye ek helper function hai
    int getBucketIndex(string key){
        int hashCode=0;

        int currentCoeff=1;
        for(int i=key.length()-1;i>=0;i--){
            hashCode += key[i] * currentCoeff;
            hashCode = hashCode%numBuckets;
            currentCoeff*=37; //37 apne man se ek prime number le liye hain
            currentCoeff = currentCoeff%numBuckets; //taki current coeff jyada bda na ho
        }

        return hashCode%numBuckets;
    }

    //rehashing function
    void rehash(){
        mapNode<V>** temp = buckets;
        buckets=new mapNode<V>*[2*numBuckets];
        for(int i=0;i<2*numBuckets;i++){
            buckets[i]=NULL;
        }
        int oldBucketCount=numBuckets;
        numBuckets*=2;
        count=0;

        for(int i=0;i<oldBucketCount;i++){
            mapNode<V>* head=temp[i];
            while(head!=NULL){
                string key=head->key;
                V value= head->value;
                insert(key,value);
                head=head->next;
            }
        }

        for(int i=0;i<oldBucketCount;i++){
            mapNode<V>* head=temp[i];
            delete head;

        }
        delete []temp;
    }

public:
    //insert
    void insert(string key,V value){
        int bucketIndex = getBucketIndex(key);
        mapNode<V>* head = buckets[bucketIndex];
        while(head->next!=NULL){
            if(head->key == key){
                head->value = value;
                return;
            }
            head=head->next;
        }
        head = buckets[bucketIndex];
        mapNode<V>* node = new mapNode<V>(key,value);
        node->next = head;
        buckets[bucketIndex] = node;
        count++;

        double loadFactor = (1.0*count)/numBuckets;
        if(loadFactor>0.7){
            rehash();
        }
    }

    //remove
    V remove(string key){
        int bucketIndex = getBucketIndex(key);
        mapNode<V>* head = buckets[bucketIndex];
        mapNode<V>* prev = NULL;
        while(head!=NULL){
            if(head->key==key){
                if(prev==NULL){
                    buckets[bucketIndex]=head->next;
                }else{
                    prev->next=head->next;
                }
                V value = head->value;
                head->next=NULL;
                delete head;
                count--;
                return value;
            }
            prev=head;
            head=head->next;
        }
        return 0;
    }

};

int main()
{
    cout<<"-------------Program started-------------"<<endl;
    ourMap<int> map;
    for(int i=0;i<10;i++){
        char c = '0'+i;
        string key = "abc";
        key = key+c;
        int value = i+1;
        //map.insert(key,value);
    }
    cout<<"Map size is: "<<map.size()<<endl;

    //hashmaps ka last video ek baar dekh kr phir se implement krne ka try krna hai
    return 0;
}

