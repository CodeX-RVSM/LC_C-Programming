class main{
    public static void main(String[] args){
        int a=78;
        long b=73;
        //widening - small to long
        long c=a;
        //narrowing --large to small
        //int d=b; --error
        int d=(int) b;
            System.out.println(a);
            System.out.println(b);
            System.out.println(c);
            System.out.println(d);

    }
        
}