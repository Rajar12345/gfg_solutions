struct Node* addTwoLists(struct Node* num1, struct Node* num2)
    {
        Node* curr1 = num1;
        Node* curr2 = num2;
        Node* prev1 = NULL;
        while(curr1 != NULL){
            Node* nxt = curr1->next;
            curr1->next = prev1;
            prev1 = curr1;
            curr1 = nxt;
        }
        Node* head1 = prev1;
        Node* prev2 = NULL;
        while(curr2 != NULL){
            Node* nxt = curr2->next;
            curr2->next = prev2;
            prev2 = curr2;
            curr2 = nxt;
        }
        Node* head2 = prev2;
        Node* dummyNode = new Node(-1);
        curr1 = head1;
        curr2 = head2;
        int carry = 0;
        while(curr1 != NULL || curr2 != NULL || carry != 0){
            int currValue1 = curr1 == NULL ? 0 : curr1->data;
            int currValue2 = curr2 == NULL ? 0 : curr2->data;
            Node* curr = new Node((currValue1 + currValue2 + carry) % 10);
            carry = (currValue1 + currValue2 + carry)/10;
            if(dummyNode->data != -1){
                curr->next = dummyNode;
            }else{
                curr->next = NULL;
            }
            dummyNode = curr;
            curr1 = curr1 == NULL ? curr1 : curr1->next;
            curr2 = curr2 == NULL ? curr2 : curr2->next;
        }
        Node* head = dummyNode;
        while(head != NULL && head->data == 0){
            head = head->next;
        }
        if(head == NULL){
            return new Node(0);
        }
        return head;
    }
