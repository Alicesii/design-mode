class LibraryVisitor;
class LibraryItemInterface{
public:
virtual void accept(LibraryVisitor* visitor)=0;
};
class Article : public LibraryItemInterface {
private:
string  m_title;        //论文名
string  m_author;    //论文作者
int m_start_page;
int m_end_page;
public:
Article(string p_author, string p_title, int p_start_page,int p_end_page );
int getNumber()fPages();
void accept(Library Visitor* visitor);
};
class Book : public LibraryItemInterface {
private:
string  m_title;       //书名
string  m_author;   //作者
int m_pages;         //页数
public:
Book(string p_author, string p_title, int p_pages);
int getNumber()fPages();
 void accept(LibraryVisitor* visitor);
};
class LibraryVisitor {
public:
virtual void visit(Book* p_book)=0;
 virtual void visit(Article* p_article)=0 
 virtual void printSum() = 0;
};
class LibrarySumPrintVisitor : public LibraryVisitor  {          //打印总页数
private:
int sum;
public:
LibrarySumPrintVisitor();
void visit(Book* p_book);
void visit(Article* p_article);
void printSum();
};
// visitor.cpp
int Article: :getNumber()fPages(){
retum m_end_page - m_start_page;
}
void Article::accept(LibraryVisitor* visitor) {  
 (LibraryVisitor*)visitor‐>visit(this)
 }
Book: :Book(string p_author, string p_title, int p_pages ) {
m_title = p_title;
m_author = p_author;
m_pages = p_pages;
}
int Book::getNumberOfPages(){    return m_pages;  }
void Book::accept(LibraryVisitor* visitor){ 
 (LibraryVisitor*)visitor‐>visit(this)
}
