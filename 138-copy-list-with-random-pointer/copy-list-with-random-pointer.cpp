class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (!head) return nullptr;

        // Step 1: Insert new nodes
        Node* temp = head;
        while (temp != NULL) {
            Node* newNode = new Node(temp->val);
            newNode->next = temp->next;
            temp->next = newNode;
            temp = newNode->next;
        }

        // Step 2: Copy random pointers
        temp = head;
        while (temp != NULL) {
            if (temp->random) {
                temp->next->random = temp->random->next;
            }
            temp = temp->next->next;
        }

        // Step 3: Separate the two lists
        Node* newHead = head->next;
        Node* original = head;
        Node* copy = newHead;
        while (original != NULL) {
            original->next = original->next ? original->next->next : nullptr;
            copy->next = copy->next ? copy->next->next : nullptr;

            original = original->next;
            copy = copy->next;
        }

        return newHead;
    }
};
