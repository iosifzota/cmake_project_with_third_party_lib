#include "Poco/ActiveMethod.h"
#include "Poco/ActiveResult.h"
#include <utility>
#include <iostream>

using Poco::ActiveMethod;
using Poco::ActiveResult;

class ActiveAdder
{
public:
    ActiveAdder(): add(this, &ActiveAdder::addImpl)
    {
    }

    ActiveMethod<int, std::pair<int, int>, ActiveAdder> add;

private:
    int addImpl(const std::pair<int, int>& args)
    {
        return args.first + args.second;
    }
};

int main(int argc, char** argv)
{
    ActiveAdder adder;

    ActiveResult<int> sum = adder.add(std::make_pair(1, 2));
	std::cout << "Called add...\n" << "Doing some extra work...\n";
    // do other things
    sum.wait();
    std::cout << sum.data() << std::endl;

    return 0;
}