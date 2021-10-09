class trie
{

private:
TrieNode* root;


trie()
{
root=new TrieNode('\0');
}

void insert(TrieNode * root,string word)
{
//base case
if(word.size()==0)
{
root->isTerminal=true;
return;
}

//small calc

int index=word[0]-'a';

TrieNode* child;
if(children[index]!=NULL)
{
child=root->children[index];
}
else
{
child=new TrieNode(word[0]);
root->children[index]=child;
}

//recursive call
insert(child,word.substr(1));
}
//user ise call karega
void insert(string word)
{
insert(root,word);
}

bool search(TrieNode* root,string word)
{


//base case
if(word.size()==0)
{
if(root->isTerminal==true)
{
return true;
}
else
{
return false;
}
}

//small calc
int index=word[0]-'a';

TrieNode* child;
if(root->children[index]!=NULL)
{
child=root->children[index];
return search(child,word.substr(1));//recursive call
}
else
{
return false;
}
}
//for user
bool search(string word)
{
return search(root,word);
}
};
