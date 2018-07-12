首先检查文档是否能够被打开，若不能打开，则给出出错信息并返回；
创建文档对象；
通过文档对象打开文档； 
通过文档对象读取文档信息；
将文档对象加入到Application的文档对象集合中。
    #include＜iostream＞
    #include＜vector＞
    using namespace std；
    class Document{
    public：
    　　void save(){/*存储文档数据，此处代码省略*/)
　　    void open(string docName){ /*打开文档，此处代码省略*/)
    　　void close(){  /*关闭文档，此处代码省略*/)
　　    virtual void read(string docName) ＝0；
    }；
    class Appplication{
    private：
    　　vector＜Document *＞  docs；  /*文档对象集合*/
    public：
　　    bool canOpenDocument(string docName){
    　　　　/*判断是否可以打开指定文档，返回真值时表示可以打开，
　　　　    返回假值表示不可打开，此处代码省略*/
      　}
    　　void addDocument(Document * aDocument){
    　　　　/*将文档对象添加到文档对象集合中*/
    　　　　docs.push_back(aDocument)；
    　　}
    　　virtual Document * doCreateDocument()＝0；/*创建一个文档对象*/
　　    void openDocument(string docName){/*打开文档*/
    　　　　if  (!canOpenDocument(docName){
　　　　　　    cout＜＜“文档无法打开!”＜＜endl；
　　　　　　    return;
    　　　　}
    　Document *adoc＝doCreateDocument() ;
　　　　      adoc->open(docName) ;
　　　　         adoc->read(docName);
　　　　       addDocument(adoc);
　　    }
    };
             
