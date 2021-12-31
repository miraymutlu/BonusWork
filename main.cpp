//
// Created by Miray on 22.12.2021.
//

#include "5. Linked List Implemantation//Node5.h"
#include "6.Inserting a node at beginning/Node6.h"
#include "7.Insert a node at nth position/Node7.h"
#include "8.Delete a node at nth position/Node8.h"
#include "9.Reverse a linked list/Node9.h"
#include "10.Print elements of a linked list in forward and reverse order using recursion/Node10.h"
#include "11.Reverse a linked list using recursion/Node11.h"
#include "13.Doubly Linked List - Implementation/Node13.h"
#include "15.Array implementation of stacks/Node15.h"
#include "16.Linked List implementation of stacks/Node16.h"
#include "17.Reverse a string or linked list using stack/Node17.h"
#include "18.Check for balanced parentheses using stack/Node18.h"
#include "20. Evaluation of Prefix and Postfix expressions using stack/Node20.h"
#include "21.Infix to Postfix using stack/Node21.h"
#include "23.Array implementation of Queue/Node23.h"
#include "24.Linked List implementation of Queue/Node24.h"
#include "28.Binary search tree - Implementation/Node28.h"
#include "30.Find min and max element in a binary search tree/Node30.h"
#include "31.Find height of a binary tree/Node31.h"
#include "33. Level Order Traversal/Node33.h"
#include "34.Preorder, Inorder, Postorder/Node34.h"
#include "35.Check if a binary tree is binary search tree or not/Node35.h"
#include "36.Delete a node from Binary Search Tree/Node36.h"
#include "37.Inorder Successor in a binary search tree/Node37.h"
using namespace std;

int main(){
    cout<<" Course topics are above. Please select one of them."<<endl;
    cout<<" 1. Introduction to data structures\n"
          " 2. Data Structures: List as abstract data type\n"
          " 3. Introduction to linked list\n"
          " 4. Arrays vs Linked Lists\n"
          " 5. Linked List - Implementation in C/C++\n"
          " 6. Linked List in C/C++ - Inserting a node at beginning\n"
          " 7. Linked List in C/C++ - Insert a node at nth position\n"
          " 8. Linked List in C/C++ - Delete a node at nth position\n"
          " 9. Reverse a linked list - Iterative method\n"
          " 10. Print elements of a linked list in forward and reverse order using recursion\n"
          " 11. Reverse a linked list using recursion\n"
          " 12. Introduction to Doubly Linked List\n"
          " 13. Doubly Linked List - Implementation in C/C++\n"
          " 14. Introduction to stack\n"
          " 15. Array implementation of stacks\n"
          " 16. Linked List implementation of stacks\n"
          " 17. Reverse a string or linked list using stack.\n"
          " 18. Check for balanced parentheses using stack\n"
          " 19. Infix, Prefix and Postfix\n"
          " 20. Evaluation of Prefix and Postfix expressions using stack\n"
          " 21. Infix to Postfix using stack\n"
          " 22. Introduction to Queues\n"
          " 23. Array implementation of Queue\n"
          " 24. Linked List implementation of Queue\n"
          " 25. Introduction to Trees\n"
          " 26. Binary Tree\n"
          " 27. Binary Search Tree\n"
          " 28. Binary search tree - Implementation in C/C++\n"
          " 29. BST implementation - memory allocation in stack and heap\n"
          " 30. Find min and max element in a binary search tree\n"
          " 31. Find height of a binary tree\n"
          " 32. Binary tree traversal - breadth-first and depth-first strategies\n"
          " 33. Binary tree: Level Order Traversal\n"
          " 34. Binary tree traversal: Preorder, Inorder, Postorder\n"
          " 35. Check if a binary tree is binary search tree or not\n"
          " 36. Delete a node from Binary Search Tree\n"
          " 37. Inorder Successor in a binary search tree\n"
          " 38. Introduction to graphs\n"
          " 39. Properties of Graphs\n"
          " 40. Graph Representation part 01 - Edge List\n"
          " 41. Graph Representation part 02 - Adjacency Matrix\n"
          " 42. Graph Representation part 03 - Adjacency List "<<endl;
    cout<<endl;
    int selection=0;
    cout<<"Enter the number of the topic."<<endl;
    cin>>selection;
    if(selection==1){
        cout<<"It's a blank file."<<endl;
    }
    else if(selection==2){
        cout<<"It's a blank file."<<endl;
    }
    else if(selection==3){
        cout<<"It's a blank file."<<endl;
    }
    else if(selection==4){
        cout<<"It's a blank file."<<endl;
    }
    else if(selection==5){
        int x,y,z;
        cout<<"Enter the three numbers you want to linked: "<<endl;
        cin>>x>>y>>z;

        Node5* head = NULL;             //Empty list
        head = new Node5();             //Creating a new node in the heap

        Node5* temp1 = NULL;
        temp1 = new Node5();

        Node5* temp2 = NULL;
        temp2 = new Node5();

        head->data=x;                   //Assigning a data to node
        head->link=temp1;               //Link this node with the right next node

        temp1->data=y;
        temp1->link=temp2;

        temp2->data=z;
        temp2->link=NULL;

        printList(head);                //Print the linked list
    }else if(selection==6){
        head2=NULL;
        cout<<"How many numbers?"<<endl;

        int size;
        int number;

        cin>>size;
        cout<<"Enter the numbers:";

        for(int i=0; i<size; i++){
            cin>>number;
            insert(number);
            print();
        }
    }else if(selection==7) {
        int length;

        cout<<"How many numbers you want to insert?"<<endl;
        cin>>length;

        cout<<"First enter the number you want to insert and then enter the which position\n"<<"you want to insert.\n"<<endl;

        for(int i=0; i<length; i++){
            int number;
            int position;
            cout<<"Number "<<i+1<<":";
            cin>>number;
            cout<<"Position "<<i+1<<":";
            cin>>position;
            insert(number,position);
        }
        print2();
    }else if(selection==8){
        head8=NULL;
            insert8(2);
            insert8(4);
            insert8(6);
            insert8(5);
            print8();
            int n;
            cout<<"Enter a position: "<<endl;
            cin>>n;
            delete8(n);
            print8();
    }else if(selection==9){
        int length;
        cout<<"How many numbers you want to insert?"<<endl;
        cin>>length;
        cout<<"Enter the numbers you want to insert."<<endl;

        for(int i=0; i<length; i++){
            int number;
            cout<<"Number "<<i+1<<":";
            cin>>number;
            insert9(number);
        }
        cout<<"Before the reverse:";
        print9(head9);
        cout<<"\n";
        cout<<"After the reverse:";
        head9=reverse9(head9);
        print9(head9);
    }else if(selection==10){
        int length;
        cout<<"How many numbers you want to insert?"<<endl;
        cin>>length;
        cout<<"Enter the numbers you want to insert."<<endl;

        for(int i=0; i<length; i++){
            int number;
            cout<<"Number "<<i+1<<":";
            cin>>number;
            insert10(number);
        }
        cout<<"Forward:";
        print10(head10);
        cout<<"\n";
        cout<<"After the reverse:";
        reverse10(head10);
    }else if(selection==11){
        int length;
        cout<<"How many numbers you want to insert?"<<endl;
        cin>>length;
        cout<<"Enter the numbers you want to insert."<<endl;

        for(int i=0; i<length; i++){
            int number;
            cout<<"Number "<<i+1<<":";
            cin>>number;
            insert11(number);
        }
        cout<<"Before the reverse:";
        print11(head11);
        cout<<"\n";
        cout<<"After the reverse:";
        reverse11(head11);
        print11(head11);
    }else if(selection==12){
        cout<<"It's a blank file."<<endl;
    }else if(selection==13){
        head11=NULL;
        int length;
        cout<<"How many numbers you want to insert?"<<endl;
        cin>>length;
        cout<<"Enter the numbers you want to insert."<<endl;

        for(int i=0; i<length; i++){
            int number;
            cout<<"Number "<<i+1<<":";
            cin>>number;
            insertAtHead13(number);
            print13();
            reversePrint13();
        }
    }else if(selection==14){
        cout<<"It's a blank file."<<endl;
    }else if(selection==15){
        push15(2);
        print15();
        push15(5);
        print15();
        push15(10);
        print15();
        pop15();
        cout<<"10 is popped"<<endl;
        print15();
        push15(12);
        print15();
    }else if(selection==16){
        push16(2);
        push16(5);
        push16(6);
        print16();
        cout<<endl;
        pop16();
        cout<<"6 popped"<<endl;
        print16();
    }else if(selection==17){
        char c[51];
        cout<<"Enter a string:";
        cin>>c;
        reverse17(c, strlen(c));
        cout<<"Output: "<<c;
    }else if(selection==18){
        string exp;
        cout << "Enter string:";
        cin >> exp;
        if (checkBalancedParenthesis18(exp)) {
            cout << "Balanced";
        }
        else {
            cout << "Not Balanced";
        }
    }else if(selection==19){
        cout<<"It's a blank file."<<endl;
    }else if(selection==20){
        string exp;
        cout << "Enter the expression you want to evaluate:";
        cin >> exp;
        int result=evaluatePostfix20(exp);
        cout<<result<<" ";
    }else if(selection==21){
        string exp;
        cout << "Enter the expression you want to evaluate:";
        cin >> exp;
        cout << infixToPostfix21(exp);
    }else if(selection==22){
        cout<<"It's a blank file."<<endl;
    }else if(selection==23){
        int x;
        int y;
        int z;
        cout<<"This is an array of length 5.\nHow many numbers do you want to enqueue?";
        cin>>x;
        cout<<"Enter the numbers you want to enqueue."<<endl;
        for(int i=0; i<x;i++) {
            cout << "Number " << i + 1<<":";
            cin >> y;
            enqueue23(y);
            if(i==x-1 && i<=4){
                cout<<"Queue:";
            }
        }
        display23();
        cout<<endl;
        cout<<"How many times do you want to dequeue."<<endl;
        cin >> z;
        for(int i=0; i<z;i++) {
            dequeue23();
        }
        display23();
    }else if(selection==24){
        enqueue24(2);
        enqueue24(4);
        enqueue24(6);
        dequeue24();
        print24();
    }else if(selection==25){
        cout<<"It's a blank file."<<endl;
    }else if(selection==26){
        cout<<"It's a blank file."<<endl;
    }else if(selection==27){
        cout<<"It's a blank file."<<endl;
    }else if(selection==28){
        BstNode28* root=NULL;
        root=insert28(root,15);
        root=insert28(root,10);
        root=insert28(root,20);
        root=insert28(root,25);
        root=insert28(root,8);
        root=insert28(root,12);
        int number;
        cout<<"Binary tree have 15,10,20,25,8,12 values."<<endl;
        cout<<"Enter the number be searched:";
        cin>>number;
        if(search28(root,number)== true){
            cout<<"Found.\n";
        }else{
            cout<<"Not found.\n";
        }
    }else if(selection==29){
        cout<<"It's a blank file."<<endl;
    }else if(selection==30){
        int x,y,z,a,b,c;
        struct BstNode30* root = NULL;
        cout<<"Enter the root:"<<endl;
        cin>>x;
        root = insert30(root, x);
        cout<<"Enter 5 numbers for insertion:"<<endl;
        cin>>y;
        insert30(root, y);
        cin>>z;
        insert30(root, z);
        cin>>a;
        insert30(root, a);
        cin>>b;
        insert30(root, b);
        cin>>c;
        insert30(root, c);

        cout << "Minimum value is: " << findMin30(root)<<endl;
        cout << "Maximum value is: " << findMax30(root)<<endl;
    }else if(selection==31){
        int x,y,z,a,b,c;
        struct Node31* root = NULL;
        cout<<"Enter the root:"<<endl;
        cin>>x;
        root = insert31(root, x);
        cout<<"Enter 5 numbers for insertion:"<<endl;
        cin>>y;
        insert31(root, y);
        cin>>z;
        insert31(root, z);
        cin>>a;
        insert31(root, a);
        cin>>b;
        insert31(root, b);
        cin>>c;
        insert31(root, c);

        cout << "Height is: " << findHeight31(root)<<endl;
    }else if(selection==32){
        cout<<"It's a blank file."<<endl;
    }else if(selection==33){
        int x,y,z,a,b,c;

        cout<<"Enter the root:"<<endl;
        cin>>x;
        root = insert33(root, x);
        cout<<"Enter 5 numbers for insertion:"<<endl;
        cin>>y;
        insert33(root, y);
        cin>>z;
        insert33(root, z);
        cin>>a;
        insert33(root, a);
        cin>>b;
        insert33(root, b);
        cin>>c;
        insert33(root, c);

        cout << "Level order traversal is: ";
        levelOrder33(root);
    }else if(selection==34){
        Node34* root = newNode34(2);
        root->left = newNode34(4);
        root->right = newNode34(6);
        root->left->left = newNode34(8);
        root->left->right = newNode34(10);

        cout << "Preorder traversal:"<<endl;
        preorder34(root);
        cout << "Inorder traversal:"<<endl;
        inorder34(root);
        cout << "Postorder traversal:"<<endl;
        postorder34(root);
    }else if(selection==35){
        struct Node35* root = new Node35();
        if(isBinarySearchTree35(root)){
            std::cout<<"BST";
        }
        else {
            std::cout << "Not a BST";
        }
    }else if(selection==36){
        int x;
        Node36* root = NULL;
        root = insert36(root, 5);
        root = insert36(root, 3);
        root = insert36(root, 2);
        root = insert36(root, 4);
        root = insert36(root, 7);
        root = insert36(root, 6);
        root = insert36(root, 8);

        cout<<"Traversal: ";
        print36(root);
        cout<<endl;
        cout<<"What data do you want to delete?"<<endl;
        cin>>x;
        cout<<"After deletion: ";
        root = delete36(root, x);
        print36(root);
    }else if(selection==37){
        int keys[] = { 16, 11, 21, 9, 13, 17, 26 };
        for (int key: keys){
            root37 = insert37(root37, key);
        }
        for (int key: keys){
            Node37* successor = getSuccessor37(root37, NULL, key);

            if (successor != NULL) {
                cout << "Successor of node " << key << " is " << successor->data;
            }
            else {
                cout << "There is no successor for node " << key;
            }
            cout << endl;
        }
    }else if(selection==38){
        cout<<"It's a blank file."<<endl;
    }else if(selection==39){
        cout<<"It's a blank file."<<endl;
    }else if(selection==40){
        cout<<"It's a blank file."<<endl;
    }else if(selection==41){
        cout<<"It's a blank file."<<endl;
    }else if(selection==42){
        cout<<"It's a blank file."<<endl;
    }

    return 0;
}
