

int f();

int g()
{
    return 10;
}

int main()
{
    return !( 10==f() );
}

int g();

int f()
{
    return g();
}
