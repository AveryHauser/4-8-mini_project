template <typename T>
class SinglyLinkedNode {
public:
    T data;
    SinglyLinkedNode* next;

    SinglyLinkedNode(T data) {
        this->data = data;
        this->next = nullptr;
    }
};

// Doubly linked node, extending the singly linked node
template <typename T>
class DoublyLinkedNode : public SinglyLinkedNode<T> {
public:
    DoublyLinkedNode* prev;

    DoublyLinkedNode(T data) : SinglyLinkedNode<T>(data) {
        this->prev = nullptr;
    }
};

// Doubly Linked List class
template <typename T>
class DoublyLinkedList {
private:
    DoublyLinkedNode<T>* head;
    DoublyLinkedNode<T>* tail;

public:
    DoublyLinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    void append(T data) {
        DoublyLinkedNode<T>* newNode = new DoublyLinkedNode<T>(data);
        if (tail == nullptr) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    void printForward() {
        DoublyLinkedNode<T>* current = head;
        while (current != nullptr) {
            std::cout << current->data << " ";
            current = (DoublyLinkedNode<T>*)current->next; // Cast is safe, navigating forward.
        }
        std::cout << "\n";
    }

    void printBackward() {
        DoublyLinkedNode<T>* current = tail;
        while (current != nullptr) {
            std::cout << current->data << " ";
            current = current->prev; // Navigating backward.
        }
        std::cout << "\n";
    }
};
