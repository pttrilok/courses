struct Node* partition(struct Node* head, int x)
{
    //code here
    Node* beforexhead = NULL;
    Node* beforex = head;
    int beforeflag = 1;
    int afterflag = 1;
    int exactflag = 1;
    Node* afterxhead = NULL;
    Node* afterx = head;
    Node* exactxhead = NULL;
    Node* exactx = head;
    
    Node* curr = head;
    while(curr!=NULL){
        if(curr->data < x){
            if(beforeflag){
                beforexhead = curr;
                beforex = curr;
                beforeflag = 0;
            }else{
                beforex->next = curr;
                beforex = curr;
                
            }
        }
        else if(curr->data > x){
            if(afterflag){
                afterxhead = curr;
                afterx = curr;
                afterflag = 0;
            }else{
                afterx->next = curr;
                afterx = curr;
                
            }
        }else{
            if(exactflag){
                exactxhead = curr;
                exactx = curr;
                exactflag = 0;
            }else{
               exactx->next = curr;
                exactx = curr;
                
            }
        }
        curr = curr->next;
    }
    if(beforexhead && afterxhead){
        if(exactxhead){
            beforex->next = exactxhead;
            exactx->next = afterxhead;
            afterx->next = NULL;
            return beforexhead;
        }else{
        beforex->next = afterxhead;
        afterx->next = NULL;
        return beforexhead;}
    }
    else if(beforexhead){
        if(exactxhead){
            beforex->next = exactxhead;
            exactx->next = NULL;
            return beforexhead;
        }
        
        beforex->next = NULL;
        return beforexhead;
    }
    else if(afterxhead){
        if(exactxhead){
            
            exactx->next = afterxhead;
            afterx->next = NULL;
            return exactxhead;
        }
        afterx->next = NULL;
        return afterxhead;
    }
    else{
        exactx->next = NULL;
        return exactxhead;
    }
}
