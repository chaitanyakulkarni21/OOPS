public class HelloWorld {
	
	public static void main(String args[]) {
		System.out.println("Welcome to java");
		
		Student s = new Student();
		
		s.setRn("111");
		s.setName("Chaitanya Kulkarni");
		
		System.out.println(s.getRn());
		System.out.println(s.getName());

		Book book = new Book();

		book.setId("112");
		book.setName("Java Programing");
		book.setAuthor("Balaguruswami");

		s.setBook(book);

		 book = s.getBook();
		book.printBook();
	}
	
}


