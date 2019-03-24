public class Student {
	String Rn; 
	String name;
	Book b;
	
	public String getRn() {
		return Rn;
	}
	
	public String getName() {
		return name;
	}
	
	public void setRn(String newRn) {
		Rn = newRn;
	}
	
	public void setName(String newName) {
		name = newName;
	}

	public void setBook(Book newBook){
		b = newBook;
	}

	public Book getBook(){
		return b;
	}
	
	public void printStudent(){
		System.out.println(Rn);
		System.out.println(name);
	}
}
