if((*head)==NULL || (*head)->next==NULL) return;
         
         
         
         vector<int>v;
         Node *temp=*head;
         while(temp){
             int val=temp->data;
             v.push_back(val);
             temp=temp->next;
         }
         
       std::sort(v.begin(),v.end());
       
    //   for(int i=0;i<v.size();i++){
    //       cout<<v[i]<<" ";
    //   }
    //   cout<<endl;
       
       temp=*head;
       for(int i=0;i<v.size();i++){
           temp->data=v[i];
           temp=temp->next;
       }
