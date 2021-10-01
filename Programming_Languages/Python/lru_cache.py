# a data structure that follows the constraints of a Least Recently Used (LRU) cache

class LRUCache:

    def __init__(self, capacity: int):
        self.head = ListNode(0, 0)
        self.tail = ListNode(0, 0)
        self.head.right = self.tail
        self.tail.left = self.head
        
        self.hashmap = dict()
        self.capacity = capacity
        

    def get(self, key: int) -> int:
        # print("GET")
        if key in self.hashmap:
            n = self.hashmap[key]
            self._remove(n)
            self._add(n)
            # print(self.hashmap)
            return n.value
        # print(self.hashmap)
        return -1

    def put(self, key: int, value: int) -> None:
        # print("PUT")
        if key in self.hashmap:
            self._remove(self.hashmap[key])
        n = ListNode(key, value)
        self._add(n)
        self.hashmap[n.key] = n
        if self.capacity < len(self.hashmap):
            r = self.head.right
            self._remove(r)
            # print(self.hashmap, r.key)
            del self.hashmap[r.key]
            
        # print(self.capacity)
        # print(self.hashmap)
        
    def _remove(self, node):
        n = self.hashmap[node.key]
        l = n.left
        r = n.right
        l.right = r
        r.left = l
    
    def _add(self, node):
        prev = self.tail.left
        prev.right = node
        self.tail.left = node
        node.left = prev
        node.right = self.tail

class ListNode:
    def __init__(self, key, value):
        self.key = key
        self.value = value
        self.left = None
        self.right = None