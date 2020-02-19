/* storage class */
void fun3(int);
void main()
{
    fun3(60);
    fun3(80);
    fun3(40);
    fun3(70);
    fun3(20);
}
void fun3(int a)
{
    int p=2;
    p++;
    printf("\n value:%d\t a value:%d",p,a);
}