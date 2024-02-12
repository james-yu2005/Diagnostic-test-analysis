int main () {
    DoublyLinkedList myList;
    myList.insert(2, 0);
    myList.insert(4, 1);
    myList.insert(1, 0);
    myList.insert(5, 3);
    myList.insert(3, 2);
    myList.print();             //1->2->3->4->5->
    myList.printReverse();      //5->4->3->2->1->

    myList.remove(0);
    myList.remove(3);
    myList.remove(1);
    myList.print();             //2->4->
    myList.printReverse();      //4->2->
    
    // search the target value
    Node* target_ptr;
    target_ptr = myList.search(100);
    target_ptr = myList.search(1);

    return 0;
}
