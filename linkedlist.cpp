//L1
// #include<bits/stdc++.h>
// using namespace std;
// //Memory Space->depends on the system
// /*
// for 32 bit int->4 bytes,*->4 bytes = 8 bytes
// for 64 bits int->4 bytes,*->8 bytes = 12 bytes
// */
// //advantages over array
// /*
// 1-you need constant-time insertions/deletions from the list
// (such as in real-time computing where time predictability is absolutely critical)

// 2-you don't know how many items will be in the list.
// With arrays, you may need to re-declare and copy memory if the array grows too big

// 3-you don't need random access to any elements

// 4-you want to be able to insert items in the middle of the list (such as a priority queue)
// */
// //you can use struct or class
// class Node {
// public:
//     int data;
//     Node* next;
// public:
//     //constructor
//     // Node(int data1, Node* next1) {
//     //     data = data1;
//     //     next = next1;
//     // }
//     //or
//     Node(int data1) {
//         data = data1;
//         next = nullptr;
//     }
// };
// //function to convert array to LL
// Node* convertArr2LL(vector<int>&arr) {
//     Node* head = new Node(arr[0]);
//     Node* mover = head;
//     for (int i = 1; i < arr.size(); i++) {
//         Node* temp = new Node(arr[i]);
//         //makes the connection
//         mover->next = temp;
//         //moves the pointer
//         mover = temp;
//     }
//     return head;
// }
// //function to count lenght of LL
// int lengthOfLL(Node* head) {
//     Node* temp = head;
//     int cnt = 0;
//     while (temp) {
//         temp = temp->next;
//         cnt++;
//     }
//     return cnt;
// }
// //function to check whether an element is present or not
// //TC->O(n) best case->O(1) avg case->O(n/2)
// int checkIfPresent(Node* head, int val) {
//     Node* temp = head;
//     while (temp) {
//         if (temp->data == val) return 1;
//         temp = temp->next;
//     }
//     return 0;
// }
// int main() {
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
//     //linked list->1D,2D,
//     //1D
//     vector<int>arr = {12, 5, 8, 7};
//     //M1
//     // Node* y = new Node(arr[0], nullptr);
//     // cout << y->data << endl;
//     // cout << y->next << endl;
//     //M2
//     // Node y = Node(arr[0], nullptr);
//     // cout << y.data << endl;
//     // cout << y.next << endl;


//     Node* head = convertArr2LL(arr);
//     //traversal
//     /*Node* temp = head;
//     while (temp) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }*/
//     // cout << lengthOfLL(head);
//     cout << checkIfPresent(head, 12);
//     return 0;
// }



//L2
#include<bits/stdc++.h>
using namespace std;
class Node {
public:
    int data;
    Node* next;
public:
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};
Node* convertArr2LL(vector<int>&arr) {
    Node* head = new Node(arr[0], nullptr);
    Node* mover = head;
    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i], nullptr);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
//to remove head from LL
Node* removeHead(Node* head) {
    if (head == NULL) return head;
    Node* temp = head;
    head = head->next;
    free(temp);//---or--
    // delete(temp);
    return head;
}
//to remove tail from LL
Node* removeTail(Node* head) {
    if (head == NULL || head->next == NULL) return NULL;
    Node* temp = head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    // free(temp->next);
    //or
    delete temp->next;
    temp->next = nullptr;
    return head;

}
//delete kth element of LL
Node* deletek(Node* head, int k) {
    if (head == NULL) return head;
    if (k == 1) {
        Node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    int cnt = 0;
    Node* temp = head;
    Node* prev = NULL;
    while (temp != NULL) {
        cnt++;
        if (cnt == k) {
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}
//to remove element
Node* removeElement(Node* head, int ele) {
    if (head == NULL) return head;
    if (head->data == ele) {
        Node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    Node* temp = head;
    Node* prev = NULL;
    while (temp != NULL) {
        if (temp->data == ele) {
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}
//to insert at head in LL
Node* insertHead(Node* head, int val) {
    Node* temp = new Node(val, head);
    return temp;
}
//to insert element at tail in LL
Node* insertTail(Node* head, int val) {
    if (head == NULL) return new Node(val);
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    Node* newNode = new Node(val);
    temp->next = newNode;
    return head;
}
//inserting at kth element
Node* insertk(Node* head, int ele, int k) {
    if (head == NULL) {
        if (k == 1) return new Node(ele);
        else return head;
    }
    if (k == 1) return new Node(ele, head);
    int cnt = 0;
    Node* temp = head;
    while (temp != NULL) {
        cnt++;
        if (cnt == k - 1) {
            Node* newNode = new Node(ele, temp->next);
            temp->next = newNode;
            break;
        }
        temp = temp->next;
    }
    return head;
}
//insert an element before the value x
Node* insertBeforeValue(Node* head, int ele, int x) {
    if (head == NULL) return NULL;
    if (head->data == x) return new Node(ele, head);
    Node* temp = head;
    while (temp->next != NULL) {
        if (temp->next->data == x) {
            Node* newNode = new Node(ele, temp->next);
            temp->next = newNode;
            break;
        }
        temp = temp->next;
    }
    return head;
}
//to print data from LL
void print(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    vector<int>arr = {2, 5, 7, 8};
    Node* head = convertArr2LL(arr);
    //to remove head
    // head = removeHead(head);
    // print(head);

    //to remove tail
    // head = removeTail(head);
    // print(head);

    //to remove kth element
    // head = deletek(head, 2);
    // print(head);

    //to remove a given element
    // head = removeElement(head, 71);
    // print(head);


    //to insert element at head
    // head = insertHead(head, 12);
    // print(head);

    //to insert element at tail
    // head = insertTail(head, 32);
    // print(head);

    //to insert element at kth position
    // head = insertk(head, 31, 2);
    // print(head);

    //insert an element before the value x
    head = insertBeforeValue(head, 121, 5);
    print(head);

    return 0;
}