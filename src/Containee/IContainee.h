#ifndef ICONTAINEE
#define ICONTAINEE

/// @brief it's a containee,which load by containee,do the core work and commnuicate with other container.
class IContainee
{
private:
    /* data */
public:
    IContainee(/* args */);
    ~IContainee();
    virtual void Dowork() = 0;
    virtual void Init() = 0;
    virtual void Finitial() = 0;
};

IContainee::IContainee(/* args */)
{
}

IContainee::~IContainee()
{
}

#endif