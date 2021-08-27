# CDS

C data structures and algorithm implementation from scratch. Available data structures are the followings, more coming soon.

| API                | Type            |
|--------------------|-----------------|
| Linked List        | Data Structures |
| Tree               | Data Structures |
| Binary Search Tree | Data Structures |

## Linked List Reference

#### Creating a new linkedlist node

```C
LinkedListNode n1, n2, n3;
```

| Data structure | Type     | Description                |
| :-------- | :------- | :------------------------- |
| `LinkedListNode` | `typedef struct LinkedListNode` | **Creates a** new LinkedListNode |

#### Setting few nodes and their arrangements

```C
n1.value = 10;
n1.next = &n2;

n2.value = 22;
n2.next = &n3;

n3.value = 67;
n3.next = NULL;
```

| Attribute | Type     | Description                       |
| :-------- | :------- | :-------------------------------- |
| `.value`      | `int` | Integer Value at a Node |
| `.next`      | `*LinkedListNode` | Pointer to the next linked list node |


### Other way of adding new elements

#### Using `addNodeAtBegining` and `addNodeAtEnd` method
```C
LinkedListNode *newHead = addNodeAtBegining(&n1, 176);
    
newHead = addNodeAtBegining(&n1, 176);
newHead = addNodeAtBegining(newHead, 44);
newHead = addNodeAtBegining(newHead, 16);
newHead = addNodeAtBegining(newHead, 51);
newHead = addNodeAtBegining(newHead, 753);

addNodeAtEnd(newHead, 88);
addNodeAtEnd(newHead, 34);
addNodeAtEnd(newHead, 55);

```

#### Printing the total Linked List

```C
PRETTY_PRINT_LL(newHead);
```

#### Output

```text
753 --> 51 --> 16 --> 44 --> 176 --> 10 --> 22 --> 67 --> 88 --> 34 --> 55 --> NULL
```
## Authors

- [@theroyakash](https://www.github.com/theroyakash)

  
## Contributing

Contributions are always welcome! Please create a new PR.

  
## License

[Apache License 2.0](https://github.com/theroyakash/CDS/blob/main/LICENSE/)