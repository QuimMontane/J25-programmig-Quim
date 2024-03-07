public class Book {
	private string title;
	private string author;
	private int numPag;
	private string ISBN;
	private boolean isInKorean;
	
	public Book () {
	this.title = "noTitle";				
	this.author = "anonimous author";
	this.numPag = 0;
	this.ISBN = "none";
	this.isInKorean = false;
	}
	
	public Book (String title, String author, int numPag, String ISBN, boolean isInKorean){
	   this.title=title;
       this.author=author;
       this.numPag=numPag;
       this.ISBN=ISBN;
       this.isInKorean=isInKorean;
	}	
