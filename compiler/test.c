

int f();

int g()
{
    int x;
    return ! (x+10);
}

int main()
{
    return !(10==f());
}

int g();

int f()
{
    return g();
}
