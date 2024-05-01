struct Node* arrangeCV(Node* head) {
        // Code here
        vector<char>v1;
        vector<char>v2;
        Node* temp=head;
        while(temp){
            char ch=temp->data;
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
                v1.push_back(temp->data);
            }
            else{
                v2.push_back(temp->data);
            }
            temp=temp->next;
        }
        temp=head;
        for(int i=0;i<v1.size();i++){
            temp->data=v1[i];
            temp=temp->next;
        }
        for(int i=0;i<v2.size();i++){
            temp->data=v2[i];
            temp=temp->next;
        }
        return head;
    }
